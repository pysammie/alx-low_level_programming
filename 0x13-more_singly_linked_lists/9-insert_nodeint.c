#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given
 * index of singly linked list
 *
 * @head: pointer to list
 * @idx: index
 * @n: new node
 *
 * Return: pointer to list
 */
listint_t *insert_nodeint_at_index(listint_t **head,
	unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;

	if (*head == NULL)
		return (NULL);

	ptr = *head;
	ptr2 = malloc(sizeof(listint_t));

	ptr2->n = n;
	ptr2->next = NULL;

	idx--;
	while (idx > 0 && ptr != NULL)
	{
		ptr = ptr->next;
		idx--;
	}
	if (ptr == NULL)
		return (NULL);

	ptr2->link = ptr->link;
	ptr->link = ptr2;

	return (*head);
}
