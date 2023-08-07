#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdis;
	int nlet;
	int rwrl;

	if (!filename)
		return (-1);

	fdis = open(filename, O_WRONLY | O_APPEND);

	if (fdis == -1)
		return (-1);

	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			;

		rwrl = write(fdis, text_content, nlet);

		if (rwrl == -1)
			return (-1);
	}

	close(fdis);

	return (1);
}
