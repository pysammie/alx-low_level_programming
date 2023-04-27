#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at end of linked list
 *
 * @head: pointer to pointer to linked list
 * @str: new node
 *
 * Return: pointer to linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = temp;
	return (temp);
}
