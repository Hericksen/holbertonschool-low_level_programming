#include "main.h"

/**
* create_file - creates or truncates a file with specific permissions,
* and writes the given content to it.
*
* @filename: the name of the file to create or truncate.
* @text_content: a NULL-terminated string to write to the file.
*If NULL, an empty file is created.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd; /* File descriptor */

	ssize_t written_bytes; /* Number of bytes written */

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* If text_content is NULL, treat it as an empty string */
	if (text_content == NULL)
		text_content = "";

	/* Open or create the file with read/write permissions for the owner */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1) /* Handle error if file can't be opened/created */
		return (-1);

	/* Write text_content to the file */
	written_bytes = write(fd, text_content, strlen(text_content));
	if (written_bytes == -1) /* Handle error if writing fails */
	{
		close(fd); /* Ensure the file is closed before returning */
		return (-1);
	}

	/* Close the file descriptor */
	if (close(fd) == -1) /* Check for errors while closing */
		return (-1);

	/* Return success */
	return (1);
}
