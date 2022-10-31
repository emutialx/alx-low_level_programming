#include "main.h"

/**
 * read_textfile - reads a file and prints it to the
 * POSIX standard output.
 * @filename: the name of the file.
 * @letters: the number of characters to be read from the file
 *
 * Return: the number of characters read from file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (fd == -1 || r == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);

	return (w);
}
