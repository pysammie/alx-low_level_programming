#include "lists.h"

/**
 * free_list - frees an entire linked list
 *
 * @head: pointer to linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
