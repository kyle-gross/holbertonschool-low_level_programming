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
 * append_text_to_file - appends text to end of a file
 * @filename: file to append to
 * @text_content: the text to add
 * Return: 1 if success -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writecheck;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1 || fd == EACCES)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	writecheck = write(fd, text_content, _strlen(text_content));
	if (writecheck == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
