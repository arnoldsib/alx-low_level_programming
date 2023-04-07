#include "main.h"

/**
 * read_textfile - Fuction that reads a text adn prints
 * it to the POSIX standard output
 * @filename: the name of the file we are going to read and print
 * @letters:  number of characters printed fromthe filename
 * Return: 0 if the file can't be read,
 * 0 if the filename is NULL and
 * 0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t rdone;
	char *buf;

	buf = malloc(sizeof(char *) * letters);
	fp = open(filename, O_RDONLY);
	if ((filename == NULL) | (fp == -1) | (buf == NULL))
		return (0);
	rdone = read(fp, buf, letters);
	write(STDOUT_FILENO, buf, rdone);
	free(buf);
	close(fp);
	return (rdone);
}
