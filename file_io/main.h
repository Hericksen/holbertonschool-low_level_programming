#ifndef _MAIN_H
#define	_MAIN_H
/* POSIX = Portable Operating System Interface */

/* Defines file control options such as O_RDONLY, used for opening files. */
#include <fcntl.h>
/* Provides access to the POSIX operating system API (Read, Write, Close) */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
#endif
