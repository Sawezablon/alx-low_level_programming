#include "main.h"
#define MAXSIZE 1204

/**
 * cp_file - copies content from one file to another.
 * @file_from: source file descriptor.
 * @file_to: destination file descriptor.
 * @file_from_name: source file name.
 * @file_to_name: destination file name.
 * Return: no return.
 */
void cp_file(int file_from, int file_to, char *file_from_name, char *file_to_name)
{
	ssize_t ch, wrt;
	char zab[MAXSIZE];
	int err_close;

	ch = 1024;
	while (ch == 1024)
	{
		ch = read(file_from, zab, 1024);
		if (ch == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from_name);
			exit(98);
		}
		wrt = write(file_to, zab, ch);
		if (wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to_name);
			exit(99);
		}
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}

/**
 * main - Entry point.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Success (0).
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	cp_file(file_from, file_to, argv[1], argv[2]);

	return (0);
}
