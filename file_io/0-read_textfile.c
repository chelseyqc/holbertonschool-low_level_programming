#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdio.h>
#include <unistd.h>

/**
* read_textfile - reads a text file and prints it to the POSIX stdout
* @filename: the name of the file
* @letters: the number of letters it should read and print
*
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes;
	ssize_t write_bytes;
	int fd;
	char buf[10000];

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	read_bytes = read(fd, buf, letters);
	if (read_bytes == -1)
	{
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buf, read_bytes);
	if ((write_bytes == -1) | (read_bytes != write_bytes))
	{
		return (0);
	}
	close(fd);
	return (write_bytes);
}
