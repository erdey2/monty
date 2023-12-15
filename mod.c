#include "monty.h"

/**
 * mod - computes the modulo of the top element by the second top element
 * @stack: memeory address of the top element
 * @line_number: from where to start
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = arguments->head;
	temp2 = temp1->next;

	if (temp1->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp2->n = temp2->n % temp1->n;
	delete_node();

	arguments->stack_length -= 1;
}
