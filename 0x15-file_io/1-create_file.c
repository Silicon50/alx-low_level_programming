#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of created file
 * Return: 1 for success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int i, len, writing;

	if (!filename)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; )
		len++;

	writing = write(i, text_content, len);

	if (writing == -1)
		return (-1);

	close(i);

	return (1);
}
