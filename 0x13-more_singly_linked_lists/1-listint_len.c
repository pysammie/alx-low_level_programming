#include "lists.h"

/**
 * listint_len - checks no of elements in
 * singly linked list
 *
 * @h: pointer to list
 *
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;
	listint_t *ptr = NULL;

	if (h == NULL)
		printf("(nil)");

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
