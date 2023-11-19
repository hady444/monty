#include "lists.h"
/**
 * add_dnodeint_end - add node to end of list
 * @head: pointer to head of list
 * @n: int value in node
 * Return: list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *travers;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t *));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->n = n;
	if ((*head) == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (*head);
	}
	travers = *head;
	while (travers->next)
		travers = travers->next;
	node->prev = travers;
	travers->next = node;
	return (*head);
}
