#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - read a textfile and print it to the POSIX
 * std output
 * @filename: the file
 * @letters: Number of letters it should read and print
 * Return: number of letters it read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, res_read, res_write;

	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	res_read = read(fd, buf, letters);
	if (res_read == -1)
	{
		free(buf);
		return (0);
	}
	res_write = write(STDOUT_FILENO, buf, res_read);
	if (res_write == -1 || res_read != res_write)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);

	return (res_write);
}
