#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to add to the new node
 *
 * Return: address of the new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *current;

/* allocate new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

/* initialize new node */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;

/* add new node to end of list */
if (*head == NULL)
{
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL)
current = current->next;
current->next = new_node;
}

return (new_node);
}