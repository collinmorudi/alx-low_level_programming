#include "main.h"

/**
 * read_textfile - reads a text file and prints the chars
 * @filename: file name.
 * @letters: number of chars printed.
 *
 * Return: number of chars printed, returns 0 if failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t num_rd, num_wr;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	num_rd = read(fd, buf, letters);
	num_wr = write(STDOUT_FILENO, buffer, num_rd);

	close(file);

	free(buffer);

	return (num_wr);
}
