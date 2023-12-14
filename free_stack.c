#include "monty.h"

/**
 * free_stack - frees the stack
 * @head: the address of the first node
 *
 * Return: void
 *
 */
void free_stack(stack_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_stack(head->next);
	free(head);
}
