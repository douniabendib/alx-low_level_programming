#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *ptr;

	size = 0;
	if (head == NULL)
	return (NULL);

	ptr = head;
	while (ptr)
	{
	if (index == size)
	return (ptr);
	size++;
	ptr = ptr->next;
	}
	return (NULL);
}
