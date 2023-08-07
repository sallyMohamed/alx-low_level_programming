#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdis;
	ssize_t nrdis, nwrl;
	char *buffer;

	if (!filename)
		return (0);

	fdis = open(filename, O_RDONLY);

	if (fdis == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrdis = read(fdis, buffer, letters);
	nwrl = write(STDOUT_FILENO, buffer, nrdis);

	close(fdis);

	free(buffer);

	return (nwrl);
}
