#include "monty.h"

/**
 * err_usage - check the number of arguments
 *
 * Return: void
 */
void err_usage(void)
{
	fprintf(stderr, "Usage: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * err_file - check if the file is exist
 * @filename: the name of the file
 *
 * Return: void
 */
void err_file(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	free_arguments();
	exit(EXIT_FAILURE);
}

/**
 * main - the entry point
 * @argc: number of arguments
 * @argv: array of pointer strings
 *
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	size_t n = 0;

	if (argc != 2)
		err_usage();
	initialize_args();
	get_stream(argv[1]);
	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		arguments->line_number += 1;
		split_line();
		get_instruction();
		call_instruction();
		free_arguments();
	}
	close_stream();
	free_arguments();
	return (0);
}
