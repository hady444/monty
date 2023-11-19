#include "monty.h"
/**
 * my_pall_f - func to print stacks and queues
 * @data_str: head of stack and queue
 * @line_number: not used var, but needed in calling function
*/
void my_pall_f(stack_t **data_str, unsigned int line_number)
{
	stack_t *my_traverser;
	(void)line_number;

	my_traverser = *data_str;
	while (my_traverser != NULL)
	{
		printf("%d\n", my_traverser->n);
		my_traverser = my_traverser->next;
	}
}
