#include "monty.h"
/**my_rotl_f - make first last
 * @data_str: poitoer to head of stack
 * @line_count: count of current read line
 */
void my_rotl_f(stack_t **data_str, unsigned int line_count)
{
	stack_t *node, *traverser;
	(void) line_count;

        if (data_str && *data_str && (*data_str)->next)
        {
                node = (*data_str);
                *data_str = (*data_str)->next;
		(*data_str)->prev = NULL;
		traverser = *data_str;
		while (traverser->next)
			traverser = traverser->next;
		traverser->next = node;
		node->next = NULL;
	}
}
