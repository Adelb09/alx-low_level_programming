#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the head of a linked list
 * @idx: index of the list where new node should be added
 * @n: integer data for new node
 *
 * Return: address of new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp_node;
unsigned int i = 0;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;
if (!idx)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

temp_node = *head;
while (temp_node)
{
if (i == idx - 1)
{
new_node->next = temp_node->next;
temp_node->next = new_node;
return (new_node);
}
temp_node = temp_node->next;
i++;
}

free(new_node);
return (NULL);
}
