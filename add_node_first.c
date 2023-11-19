#include "monty.h"
/**
 * add_node_first - add node to first of list
 * @head: pointer to head of list
 * @n: int value in node
 * Return: list
 */
stack_t *add_node_first(stack_t **head, const int n)
{
	stack_t *node, *me;

	if (head == NULL)
		return (NULL);
	me = *head;
	node = malloc(sizeof(stack_t *));
	if (node == NULL)
		return (NULL);
	node->prev = NULL;
	node->n = n;
	if (me == NULL)
	{
		node->next = NULL;
		*head = node;
		return (*head);
	}
	me->prev = node;
	node->next = *head;
	*head = node;
	return (*head);
}
