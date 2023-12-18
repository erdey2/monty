#include "monty.h"

/**
* handle_comment - checks the tokens they starts with #
* Return: 1 onsuccess 0 otherwise
*/
int handle_comment(void)
{
	if (
		arguments->tokens &&
		arguments->tokens[0] &&
		arguments->tokens[0][0] == '#'
	)
		return (1);

	return (0);
}
