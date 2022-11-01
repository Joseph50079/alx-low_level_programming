#include "main.h"

/**
 * read_textfile - reads file from filename
 * @filname: namme of file
 * @letters: contents of file
 * Return: ntext
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *text;
	ssize_t ntext;

	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(text);
		close(fd);
	}
	ntext = read(fd, text, letters);
	if (ntext == -1)
	{
		free(text);
		close(fd);
	}
	ntext = write(0, text, letters);
	if (ntext == -1)
	{
		free(text);
		close(fd);
		return (0);
	}
	free(text);
	close(fd);
	return (ntext);
}
