#include "lists.h"

/**
 * add_nodeint_end - adds node at end of list
 *
 * @head: pointer to list
 * @n: new node
 *
 * Return: pointer to list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	if (*head == NULL)
		*head = temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	return (*head);
}
