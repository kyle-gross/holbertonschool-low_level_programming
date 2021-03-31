#include "holberton.h"
/**
 * main - copies content of a file to another file
 * @argc: # of command line args
 * @argv: stores command line args in string form
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int fd, fd1, readval, closeval, writecheck;

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
	fd1 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd), exit(99);
	}
	while ((readval = read(fd, buf, 1024)) > 0)
	{
		writecheck = write(fd1, buf, readval);
		if (writecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd), close(fd1), exit(99);
		}
	}
	closeval = close(fd);
	if (closeval == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	closeval = close(fd1);
	if (closeval == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	return (0);
}
