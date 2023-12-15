#include "monty.h"

/**
 * mul - Multiplies the top two elements of the stack
 * @stack: memory address to the top element
 * @line_number: from where to start.
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = arguments->head;
	temp2 = temp1->next;

	temp2->n = temp2->n * temp1->n;
	delete_node();

	arguments->stack_length -= 1;
}
