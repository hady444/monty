#include "monty.h"
/**
 * my_pop_f - removes the top element of the stack
 * @data_str: poitoer to head of stack
 * @line_count: count of current read line
 * Return: top node.
 */
void my_pop_f(stack_t **data_str, unsigned int line_count)
{
	stack_t *node;

	if (data_str && *data_str)
	{
		node = *data_str;
		*data_str = node->next;
		(*data_str)->prev = NULL;
		node->next = NULL;
		printf("%d\n", node->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_count);
		free_structure(*data_str), free(cont.line), free(cont.my_file);
		exit(EXIT_FAILURE);
	}
}
