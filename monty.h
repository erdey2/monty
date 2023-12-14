#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct arg_s - string of arguments
 * @stream - file stream
 * @line - the line to be read
 *
 *Description - used to get stream from the provided file
 */
typedef struct arg_s
{
        FILE *stream;
        char *line;
        unsigned int line_number;
        char **tokens;
        int n_tokens;
        instruction_t *instruction;
	stack_t *head;
	int stack_length;
	int stack;
} arg_t;

extern arg_t *arguments;

void get_stream(char *filename);
void initialize_args();
void err_file(char *filename);
void err_usage(void);

void close_stream(void);
void free_tokens(void);
void get_instruction(void);
void call_instruction(void);
void invalid_instruction(void);
void split_line(void);

int is_digit(char *s);
void free_arguments(void);
void free_head(void);
void free_stack(stack_t *head);

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);

#endif
