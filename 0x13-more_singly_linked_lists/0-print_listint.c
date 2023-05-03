#include "lists.h"

/**
 * print_listint - prints singly linked list
 *
 * @h: pointer to list
 *
 * Return: no of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;
	const listint_t *ptr;

	count = 0;

	if (h == NULL)
		printf("(nil)");

	ptr = NULL;
	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
