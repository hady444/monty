#include "monty.h"
/**my_rotr_f - make last first
 * @data_str: poitoer to head of stack
 * @line_count: count of current read line
 */
void my_rotr_f(stack_t **data_str, __attribute__((unused))unsigned int line_count)
{
	stack_t *traverser, *node;

        if (data_str == NULL || (*data_str) == NULL || (*data_str)->next == NULL)
		return;
	traverser = *data_str;
	while (traverser->next)
		traverser = traverser->next;
	traverser->next = *data_str;
	traverser->prev->next = NULL;
	traverser->prev = NULL;
	node = *data_str;
	node->prev = traverser;
	(*data_str) = traverser;
}
