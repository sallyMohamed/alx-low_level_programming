#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fdis;
	int nlet;
	int rwrl;

	if (!filename)
		return (-1);

	fdis = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdis == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nlet = 0; text_content[nlet]; nlet++)
		;

	rwrl = write(fdis, text_content, nlet);

	if (rwrl == -1)
		return (-1);

	close(fdis);

	return (1);
}
