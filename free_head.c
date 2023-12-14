#include "monty.h"

/**
 * free_head - free a linked list pointed by head
 *
 * Return - void
 */
void free_head(void)
{
	if (arguments->head)
		free_stack(arguments->head);
	arguments->head = NULL;
}
