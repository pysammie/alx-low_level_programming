#include "lists.h"

/**
 * pop_listint - deletes head node of singly
 * linked list
 *
 * @head: pointer to list
 *
 * Return: head nodes's data
 */
int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
		return (0);

	listint_t *temp = *head;

	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (n);
}
