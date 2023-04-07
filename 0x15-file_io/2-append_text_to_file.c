#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end
 * @filename: name of the file
 * @text_content: the null terminated string to add at the end
 * of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, len, donew;

	fp = open(filename, O_WRONLY | O_APPEND);
	if ((filename == NULL) | (fp == -1))
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		donew = write(fp, text_content, len);
		if (donew == -1)
			return (-1);
	}
	close(fp);
	return (1);
}
