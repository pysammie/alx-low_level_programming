#include "lists.h"

/**
 * print_list - prints all elements of list
 *
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			ptr = ptr->next;
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
		}
	}
	return (count);
}
