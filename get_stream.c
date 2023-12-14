#include "monty.h"

/**
 * get_stream - gets a line from a file
 * @filename: the name of the file
 */
void get_stream(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		err_file(filename);
	arguments->stream = fopen(filename, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		err_file(filename);
	}
}
