#include "monty.h"

/**
 * call_instruction - call instruction to be run
 * 
 * Return: void
 */
void call_instruction(void)
{
	stack_t *stack = NULL;

	if (arguments->n_tokens == 0)
		return;
	arguments->instruction->f(&stack, arguments->line_number);
}
