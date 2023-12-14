#include "monty.h"

/**
 * pall - display all the elements
 * @stack: the stack
 * @line_number: the line number
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (arguments->head == NULL)
		return;
	(void) line_number;
	(void) stack;
	temp = arguments->head;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
