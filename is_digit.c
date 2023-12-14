#include "monty.h"

/**
 * is_digit - checks if it is numeric
 * @s: the string to be checked
 *
 * Return: the digit
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && s[i] == '-' && s[i + 1])
		{
			i++;
			continue;
		}
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
