#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: the name of the file to create
 * @text_content: the written content in the file
 * Return: -1 if the filename is NULL
 * 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, len;
	ssize_t wdone;

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if ((fp == -1) | (filename == NULL))
		return (-1);
	if (text_content)
	{
		text_content = "";
		for (len = 0; text_content[len]; len++)
		{
			;
		}
		wdone = write(fp, text_content, len);
		if (wdone == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
