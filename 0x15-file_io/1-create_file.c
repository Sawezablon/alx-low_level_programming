#include "main.h"

/**
  * create_file -  a function that creates a file.
  * @filename: name of the file
  * @text_content: contents for a file
  *
  * Return: -1 or 1
  */
int create_file(const char *filename, char *text_content)
{
	int zab, wrt, i;

	if (filename == NULL)
		return (-1);

	zab = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (zab == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		wrt = write(zab, text_content, i);
		if (wrt == -1)
			return (-1);
	}

	close(zab);
	return (1);
}
