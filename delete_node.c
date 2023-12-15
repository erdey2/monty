#include "monty.h"

/**
* delete_node - delete node from the top of the stack
* Return: void
*/
void delete_node(void)
{
	stack_t *temp;

	temp = arguments->head;
	arguments->head = temp->next;
	free(temp);
}
