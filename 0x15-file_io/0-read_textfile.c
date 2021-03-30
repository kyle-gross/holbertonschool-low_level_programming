#include "holberton.h"
/**
 * read_textfile - reads a text file
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 * Return: 0 if NULL or actual number of letters it could read/print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0, fd, writecheck = 0;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	count = read(fd, buf, letters);
	writecheck = write(STDOUT_FILENO, buf, count);
	if (writecheck == -1)
		return (0);
	free(buf);
	close(fd);
	return (count);
}
