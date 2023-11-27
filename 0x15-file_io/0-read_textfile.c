#include "main.h"

/**
 * read_textfile - reads a text file and printsPOSIX standard output
 * @filename: char file name
 * @letters: size_t letters
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fud;
	ssize_t rud, wur;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fud = open(filename, O_RDONLY);
	if (fud == -1)
	{
		free(buf);
		return (0);
	}
	rud = read(fud, buf, letters);
	if (rud == -1)
	{
		free(buf);
		close(fud);
		return (0);
	}
	close(fud);
	wur = write(STDOUT_FILENO, buf, rud);
	if (wur == -1)
	{
		free(buf);
		return (0);
	}
	if (wur != rud)
		return (0);
	return (rud);
}
