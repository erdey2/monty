#include "monty.h"

/**
 * close_stream - close a file
 *
 * Return - void
 */
void close_stream(void)
{
	if (arguments->stream == NULL)
		return;
	fclose(arguments->stream);
	arguments->stream = NULL;
}
