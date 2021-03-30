#include "holberton.h"
/**
 * _strlen - returns length of a string
 * @s: the string to count
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	return (count);
}
/**
 * read_textfile - reads a text file
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 * Return: 0 if NULL or actual number of letters it could read/print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i = 0;
	ssize_t count = 0, fd;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	count = read(fd, buf, letters);
	for (; i < _strlen(buf); i++)
		_putchar(buf[i]);
	free(buf);
	close(fd);
	return (count);
}
