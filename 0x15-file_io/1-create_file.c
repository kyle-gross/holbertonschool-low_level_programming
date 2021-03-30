#include "holberton.h"
/**
 * _strlen - string length
 * @s: the string
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] && s)
		count++;
	return (count);
}
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, writecheck = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	writecheck = write(fd, text_content, len);
	if (writecheck == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
