#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: name of file
 * @text_content: text to be appended
 * Return: 1 for success, 0 for otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, writing, len;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; )
			len++;

		writing = write(i, text_content, len);

		if (writing == -1)
			return (-1);
	}
	close(i);
	return (1);
}
