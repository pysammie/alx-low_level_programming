#include "lists.h"

/**
 * add_nodeint - adds node at beginning of list
 *
 * @head: pointer to list
 * @n: new node
 *
 * Return: pointer to list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
