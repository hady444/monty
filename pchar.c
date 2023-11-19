#include "monty.h"
/**
 * my_pchar_f- add node to first of list
 * @data_str: pointer to head of list
 * @line_count: int value in node
 *
 */
void my_pchar_f(stack_t **data_str, unsigned int line_count)
{
	if (data_str && *data_str)
	{
		if (!((*data_str)->n >= 65 && (*data_str)->n <= 90) &&
				!((*data_str)->n >= 97 && (*data_str)->n <= 122))
		{
			fprintf(stderr, "L%d: can't pchar, value out of range\n", line_count);
			free_structure(*data_str), free(cont.line), free(cont.my_file);
			exit(EXIT_FAILURE);
		}
		printf("%c\n", (*data_str)->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_count);
		free_structure(*data_str), free(cont.line), free(cont.my_file);
		exit(EXIT_FAILURE);
	}
}
