#include "lists.h"
/**
 * insert_node - Insert a node into an ordered int linked list
 * @head: Double pointer to the first node of the function
 * @number: Value to be inserted on the linked list
 * Return: Address ofthe new node, NULL if fails
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current = *head;
	listint_t *node_to_add = malloc(sizeof(listint_t));

	if (node_to_add == NULL)
		return (NULL);

	node_to_add->n = number;
	node_to_add->next = NULL;

	if (current == NULL)
	{
		(*head) = node_to_add;
		return (node_to_add);
	}
	else if (number <= 0 || number < current->n)
	{
		node_to_add->next = current;
		(*head) = node_to_add;
		return (node_to_add);
	}

	while (current->next)
	{
		if ((current->next->n >= number) || (current->n >= number))
		{
			node_to_add->next = current->next;
			current->next = node_to_add;

			return (node_to_add);
		}
		current = current->next;
	}

	current->next = node_to_add;

	return (node_to_add);
}
