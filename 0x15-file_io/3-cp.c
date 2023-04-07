#include "main.h"
#include <stdio.h>

/**
 * main - ...........
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, -1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
/**
 * cp - copies the content of a file to another
 * @file_from: Name of the source file
 * @file_to: Name of the destination file
 * Return: 1 on success, -1 on failure
 */
void cp(const char *file_from, const char *file_to)
{
	int fp, ofp, rfp, op;
	char buf[1024];

	fp = open(file_from, O_RDONLY);
	ofp = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	rfp = read(fp, buf, 1024);
	op = write(ofp, buf, rfp);
	if ((file_from == NULL) | (fp == -1))
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		exit(98);
	}
	else if (rfp == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
		exit(99);
	}
	else if (close(fp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't clodr fd %d\n", fp);
		exit(100);
	}
	else if (close(ofp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", ofp);
		exit(100);
	}
	while (rfp > 0)
	{
		if ((op != rfp) || (ofp == -1))
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
			exit(99);
		}
	}
}

