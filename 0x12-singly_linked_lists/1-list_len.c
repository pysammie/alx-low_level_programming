#include "lists.h"

/**
 * list_len - returns no of element in linked list
 *
 * @h: pointer to linked list
 *
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
