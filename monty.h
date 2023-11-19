#ifndef MONTY
#define MONTY
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

#define INIT_CONT {NULL, NULL, 0, NULL}
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
 * struct container - contain all required vars for stack and queue
 * @arguments: arguments contain function and (number)
 * @my_file: file read
 * @check: 0 if stack, 1 if queue
 * @line: line in file
 */
typedef struct container
{
	char *arguments;
	FILE *my_file;
	int check;
	char *line;
} cont_t;
extern cont_t cont;

void my_push_f(stack_t **data_str, unsigned int line_number);
stack_t *add_node_first(stack_t **head, const int n);
void free_structure(stack_t *data_str);
int apply_fun(stack_t **data_str, unsigned int line_number);
void my_pall_f(stack_t **data_str, unsigned int line_number);
void my_pint_f(stack_t **data_str, unsigned int line_number);
void my_pop_f(stack_t **data_str, unsigned int line_count);
void my_swap_f(stack_t **data_str, unsigned int line_count);
void my_add_f(stack_t **data_str, unsigned int line_count);
#endif
