#include "main.h"

/**
  * read_textfile - function that reads a text file and prints
  * @filename: name of a file
  * @letters: number of letters
  *
  * Return: 0 or actual number of letters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t rcnt, wcnt;
	int zab;

	if (filename == NULL)
		return (0);

	zab = open(filename, O_RDWR);
	if (zab == -1)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);

	rcnt = read(zab, ptr, letters);
	wcnt = write(STDOUT_FILENO, ptr, rcnt);

	free(ptr);

	close(zab);
	return (wcnt);
}
