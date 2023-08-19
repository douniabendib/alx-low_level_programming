#include "lists.h"
/**
 * dlistint_len - return the num of element of dll
 * @h: head of double linked list
 * Return: the num of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
