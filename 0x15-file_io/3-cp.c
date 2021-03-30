#include "holberton.h"
/**
 * _strlen - string length
 * @s: the string
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (s && s[count])
		count++;
	return (count);
}
/**
 * loopydoo - does loop stuff
 * @readval: stores return val of read
 * @fd: file descriptor 1
 * @fd1: file descriptor 2
 * @buf: buffer
 * Return: return val of read
 */
int loopydoo(int readval, int fd, int fd1, char *buf)
{

	write(fd1, buf, _strlen(buf));
	free(buf);
	buf = malloc(1024);
	if (!buf)
		return (0);
	readval = read(fd, buf, 1024);
	return (readval);
}
/**
 * main - copies content of a file to another file
 * @argc: # of command line args
 * @argv: stores command line args in string form
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	char *buf;
	int fd, fd1, readval, closeval;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd1 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buf = malloc(1024);
	if (!buf)
		return (0);
	readval = read(fd, buf, 1024);
	while (readval != 0)
		readval = loopydoo(readval, fd, fd1, buf);
	free(buf);
	closeval = close(fd);
	if (closeval == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	closeval = close(fd1);
	if (closeval == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
