#include "monty.h"

/**
 * initialize_args - initializes different arguments
 *
 * Return - void
 */
void initialize_args(void)
{
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_arguments();
		exit(EXIT_FAILURE);
	}
	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_arguments();
		exit(EXIT_FAILURE);
	}
	arguments->stream = NULL;
	arguments->line = NULL;
	arguments->n_tokens = 0;
	arguments->line_number = 0;
	arguments->head = NULL;
	arguments->stack_length = 0;
}
