#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

/**
* readfd - reads from file descriptor
* @fdfrom: the fd to be copied from
* @buf: buffer that's read into
* @size: max bytes to be read
* @filename: name of the file
*
* Return: number of bytes read on success, else 98
*/
ssize_t readfd(int fdfrom, char *buf, int size, char *filename)
{
	ssize_t read_bytes;

	read_bytes = read(fdfrom, buf, size);
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from ");
		dprintf(STDERR_FILENO, "file %s\n", filename);
		exit (98);
	}
	return (read_bytes);
}

/**
* closefd - closes file descriptor
* @fd: the file descriptor
*
* Return: void
*/
void closefd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		exit (100);
	}
}
/**
* main - copies the content of a file to another file
* @argc: number of arguments
* @argv: array vector
*
* Return: 0 if success
*/
int main (int argc, char *argv[])
{
	int fdto;
	int fdfrom;
	char buf[1024];
	ssize_t read_bytes;
	ssize_t write_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from ");
		dprintf(STDERR_FILENO, "file %s\n", argv[1]);
		exit (98);
	}
	fdto = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	read_bytes = readfd(fdfrom, buf, sizeof(buf), argv[1]);
	while (read_bytes != '\0')
	{
		write_bytes = write(fdto, buf, read_bytes);
		if (write_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to ");
			dprintf(STDERR_FILENO, "%s\n", argv[2]);
			exit (99);
		}
		read_bytes = readfd(fdfrom, buf, sizeof(buf), argv[1]);
	}
	closefd(fdfrom);
	closefd(fdto);
	return (0);
}
