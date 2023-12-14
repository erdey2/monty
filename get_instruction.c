#include "monty.h"

/**
 * get_instruction - aquire instruction
 *
 * Return: void
 */
void get_instruction(void)
{
	int i = 0;
	instruction_t instructions[] = {
		{"push", &push}, {"pall", &pall},
		{"swap", &swap}, {"nop", &nop}.
		{NULL, NULL}
	};
	if (arguments->n_tokens == 0)
		return;
	for (; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, arguments->tokens[0]) == 0)
		{
			arguments->instruction->opcode = instructions[i].opcode;
			arguments->instruction->f = instructions[i].f;
			return;
		}
	}
	invalid_instruction();
}
