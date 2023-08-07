#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

/**
* append_text_to_file - appends text at the end of a file
* filename: name of the file
* text_content: the terminated string to add at the end of the file
*
* Return: 1 on success or -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n;
	ssize_t write_bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	n = 0;
	while (text_content[n] != '\0')
	{
		n = n + 1;
	}
	write_bytes = write(fd, text_content, n);
	if (write_bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
