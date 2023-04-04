#include "lists.h"
/**
 * print_listint- print linked list
 * @h: pointer of lisl
 * Return:the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		printf("The linked list is empty");
	while (h != NULL)
	{
		printf("%d \n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
