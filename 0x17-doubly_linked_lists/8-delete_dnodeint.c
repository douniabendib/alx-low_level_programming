#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *A;
	dlistint_t *D;
	unsigned int i;

	A = *head;

	if (A != NULL)
		while (A->prev != NULL)
			A = A->prev;

	i = 0;

	while (A != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = A->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				D->next = A->next;

				if (A->next != NULL)
					A->next->prev = D;
			}

			free(A);
			return (1);
		}
		D = A;
		A = A->next;
		i++;
	}

	return (-1);
}
