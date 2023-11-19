#include "monty.h"
/**
 * my_pstr_f- add node to first of list
 * @data_str: pointer to head of list
 * @line_count: int value in node
 *
 */
void my_pstr_f(stack_t **data_str, unsigned int line_count)
{
	stack_t *travers;
	(void) line_count;

	travers = *data_str;
	while (travers && travers->n != 0)
	{
		if (!(travers->n >= 65 && travers->n <= 90) &&
				!(travers->n >= 97 && travers->n <= 122))
		{
			break;
		}
		printf("%c\n", travers->n);
		travers = travers->next;
	}
	printf("\n");
}
