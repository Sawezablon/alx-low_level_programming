#include "main.h"

/**
  * append_text_to_file - function that appends text
  * @filename: name of the file
  * @text_content: contents
  *
  * Return: 1 or -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int zab, wrt, i;

	if (filename == NULL)
		return (-1);

	zab = open(filename, O_WRONLY | O_APPEND);
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
