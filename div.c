#include "monty.h"
/**
 * my_div_f- add node to first of list
 * @data_str: pointer to head of list
 * @line_count: int value in node
 *
 */
void my_div_f(stack_t **data_str, unsigned int line_count)
{
	stack_t *node;

	if (data_str && *data_str && (*data_str)->next)
	{
		if ((*data_str)->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_count);
			free_structure(*data_str), free(cont.line), free(cont.my_file);
			exit(EXIT_FAILURE);
		}
		node = *data_str;
		*data_str = (*data_str)->next;
		(*data_str)->n = node->n / (*data_str)->n;
		(*data_str)->prev = NULL;
		free(node);
	}
	else
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_count);
		free_structure(*data_str), free(cont.line), free(cont.my_file);
		exit(EXIT_FAILURE);
	}
}
