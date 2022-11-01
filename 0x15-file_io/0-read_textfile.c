#include "main.h"

/**
 * read_textfile - reads file from filename
 *
 * @filename: name of file
 * @letters: contents of file
 * Return: ntext
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *text;
	ssize_t ntext;

	if (!filename)
	{
		return (0);
	}
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(text);
		close(fd);
		return (0);
	}
	ntext = read(fd, text, letters);
	if (ntext == -1)
	{
		free(text);
		close(fd);
		return (0);
	}
	ntext = write(STDOUT_FILENO, text, ntext);
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
