#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file.
* @filename: name of the file.
* @text_content: NULL terminated string to add at the end of the file.
*
* Return: return 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	 int fd, len = 0, write_status;

	if (filename == NULL)
		return (-1);

	/* Open the file in append mode; do not create if it doesn't exist */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, nothing to append, return success */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Calculate the length of text_content */
	while (text_content[len])
		len++;

	/* Write text_content to the file */
	write_status = write(fd, text_content, len);
	close(fd);

	if (write_status == -1)
		return (-1);

	return (1);
}
