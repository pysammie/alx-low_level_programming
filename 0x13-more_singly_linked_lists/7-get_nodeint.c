#include "lists.h"

/**
 * get_nodeint_at_index - gets node at given index
 *
 * @head: pointer to list
 * @index: Index
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head,
	unsigned int index)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = head;
	if (index == 0)
		return (head);

	while (index > 0 && ptr != NULL)
	{
		ptr = ptr->next;
		index--;
	}
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
