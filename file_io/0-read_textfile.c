#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: pointer to the name of the file to read.
* @letters: number of letters to read and print.
*
* Return: The actual number of letters it could read and print,
* or 0 if the file cannot be opened, read, or if malloc fails.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* File descriptor for the file */
	ssize_t bytes_read; /* Number of bytes read from the file */
	ssize_t bytes_written; /* Number of bytes written to STDOUT */
	char *buffer; /* Buffer to store file content */

	if (filename == NULL) /* Check if filename is NULL */
		return (0);
	fd = open(filename, O_RDONLY); /* Open the file in read-only mode */
	if (fd == -1) /* If file opening fails, return 0 */
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	/* If memory allocation fails, close the file and return 0 */
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	/* Read from the file into the buffer */
	bytes_read = read(fd, buffer, letters);
	 /* If reading fails, free memory, close file, and return 0 */
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* Write the buffer content to the standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	 /* Handle write failure */
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_written);
}
