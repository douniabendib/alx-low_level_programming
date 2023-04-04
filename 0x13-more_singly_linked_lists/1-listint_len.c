#include "lists.h"
/**
 * listint_len - function that returns the number of element
 * @h: pointer of list
 * Return: returns the number of list
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
