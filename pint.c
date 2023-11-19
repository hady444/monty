#include "monty.h"
/**
 * my_pint_f - func to print stacks and queues
 * @data_str: head of stack and queue
 * @line_number: not used var, but needed in calling function
*/
void my_pint_f(stack_t **data_str, unsigned int line_number)
{
	if (data_str || (*data_str))
	{
		printf("%d\n", (*data_str)->n);
	}
	else
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		free_structure(*data_str), free(cont.line), free(cont.my_file);
		exit(EXIT_FAILURE);
	}
}
