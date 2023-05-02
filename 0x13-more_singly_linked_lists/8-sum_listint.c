#include "lists.h"

/**
 * sum_listint - sums all data of singly linked list
 *
 * @head: pointer to list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
