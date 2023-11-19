#include "monty.h"
/**
 * add_dnodeint_end - add node to end of list
 * @data_str: pointer to head of list
 * @n: int value in node
 * Return: list
 */
stack_t *enqueue(stack_t **data_str, const int n)
{
	stack_t *node, *travers;

	if (data_str == NULL)
		return (NULL);
	node = malloc(sizeof(stack_t *));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->n = n;
	if ((*data_str) == NULL)
	{
		node->prev = NULL;
		*data_str = node;
		return (*data_str);
	}
	travers = *data_str;
	while (travers->next)
		travers = travers->next;
	node->prev = travers;
	travers->next = node;
	return (*data_str);
}
