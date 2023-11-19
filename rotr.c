#include "monty.h"
/**my_rotr_f - make last first
 * @data_str: poitoer to head of stack
 * @line_count: count of current read line
 */
void my_rotr_f(stack_t **data_str, unsigned int line_count)
{
	stack_t *node, *traverser;
	(void) line_count;

        if (data_str && *data_str && (*data_str)->next)
        {
		traverser = *data_str;
		while (traverser->next)
			traverser = traverser->next;
		traverser->prev->next = NULL;
		traverser->prev = NULL;
		node = *data_str;
		traverser->next = node;
		*data_str = traverser;
	}
}
