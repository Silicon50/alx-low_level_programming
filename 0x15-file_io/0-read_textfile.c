#include "main.h"

/**
 * read_textfile - reads text file and prints to POSIX std output
 * @filename: file to be read
 * @letters: num of letters to be read and printed
 * Return: num written or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t reading, writing;
	char *ptr;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!ptr)
		return (0);

	
	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	reading = read(i, ptr, letters);
	close(i);

	
	writing = write(STDOUT_FILENO, ptr, reading);

	free(ptr);

	return (writing);
}
