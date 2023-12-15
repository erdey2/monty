#include "monty.h"

/**
 * free_all_args - deallocates the allocated memory for arguments
 * 
 * Return: void
 */

void free_all_args(void)
{
	close_stream();
	free_tokens();
	free_arguments();
}
