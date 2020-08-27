#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * check_cycle - Checks if a linked list is cyclic or not
 * @list: Linked list received to be proved
 * Return: 1 if linked list is cyclic
 */
int check_cycle(listint_t *list)
{
	listint_t  *slow_p = list, *fast_p = list;

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;

		if (slow_p == fast_p)
			return (1);
	}
	return (0);
}
