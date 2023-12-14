#include "monty.h"

/**
 * push - push an element to the top of the stack
 * @stack: the user defined data structure
 * @line_number: the line number
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	if (arguments->n_tokens <= 1 || !(is_digit(arguments->tokens[1])))
	{
		free_arguments();
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_arguments();
		exit(EXIT_FAILURE);
	}
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(arguments->tokens[1]);
	if (arguments->head != NULL)
	{
		(*stack)->next = arguments->head;
		arguments->head->prev = *stack;
	}
	arguments->head = *stack;
	arguments->stack_length += 1;
}
