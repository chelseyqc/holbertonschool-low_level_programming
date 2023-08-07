#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
* create_file - creates a file
* @filename: the name of the file to create
* @text_content: a NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n;
	ssize_t write_bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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
