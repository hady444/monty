#include "monty.h"
/**
 * free_structure- free the structur passed
 * @data_str: pointer to head of list
 */
void free_structure(stack_t *data_str)
{
	stack_t *current;

	while (data_str != NULL)
	{
		current = data_str;
		data_str = data_str->next;
		free(current);
	}
}
