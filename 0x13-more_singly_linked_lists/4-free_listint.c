#include "lists.h"

/**
 * free_listint - frees singly linked list
 *
 * @head: pointer to list
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
