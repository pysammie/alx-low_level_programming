#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given
 * index of singly linked list
 *
 * @head: pointer to list
 * @index: index
 *
 * Return: 1 (Success) -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head,
	unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);

	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index > 0 && current != NULL)
		{
			previous = current;
			current = current->next;
			index--;
		}
		if (current == NULL)
			return (-1);

		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
