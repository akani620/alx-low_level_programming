#include "main.h"
#include <stdlib.h>

/**
 *read_textfile - reads a textfile and prints it to the posix std out
 *@filename : a pointer to the name of the file
 *@letters : the number of letters the function should read and print.
 *
 *Return : if the function fails or the file name is zero - 0
 *        0/w - the actual number of bytes the function can read and print.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r,	o,	w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
			return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	
	free(buffer);
	close(o);

	return (w);
}

