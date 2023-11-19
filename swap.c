#include "monty.h"
/**
 * my_swap_f - swap top 2 elements in stack
 * @data_str: poitoer to head of stack
 * @line_count: count of current read line
 *
 */
void my_swap_f(stack_t **data_str, unsigned int line_count)
{
	stack_t *node;

	if (data_str && *data_str && (*data_str)->next)
	{
		*data_str = (*data_str)->next;
		node = (*data_str)->prev;
		node->next = (*data_str)->next;
		node->prev = *data_str;
		(*data_str)->prev = NULL;
		(*data_str)->next = node;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_count);
		free_structure(*data_str), free(cont.line), free(cont.my_file);
		exit(EXIT_FAILURE);
	}
}
