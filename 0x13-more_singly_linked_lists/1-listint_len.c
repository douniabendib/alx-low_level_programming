#include "lists.h"
/*
 * listint_len - returns the number of elements in a linked
 * @h: pointer of list 
 * Return: returns the number of list
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		printf("The linked list is empty");
	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
