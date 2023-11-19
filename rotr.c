#include "monty.h"
/**my_rotr_f - make last first
 * @data_str: poitoer to head of stack
 * @line_count: count of current read line
 */
void my_rotr_f(stack_t **data_str, unsigned int line_count)
{
	stack_t *traverser;
	(void) line_count;

        if (data_str && *data_str && (*data_str)->next)
        {
		traverser = *data_str;
		while (traverser->next)
			traverser = traverser->next;
		traverser->prev->next = NULL;
		traverser->prev = NULL;
		traverser->next = *data_str;
		(*data_str)->prev = traverser;
		*data_str = traverser;
	}
}
