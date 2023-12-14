#include "monty.h"

/**
 * invalid_instruction - handle an in valid instruction 
 *
 * Return: void
 */
void invalid_instruction(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
			arguments->line_number, arguments->tokens[0]);
	close_stream();
	free_tokens();
	free_arguments();
	exit(EXIT_FAILURE);
}
