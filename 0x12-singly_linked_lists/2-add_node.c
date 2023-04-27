#include "lists.h"
#include <string.h>

/**
 * add_node - adds node at beginning of linked list
 *
 * @head: pointer to pointer to linked list
 *
 * Return: pointer to linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
