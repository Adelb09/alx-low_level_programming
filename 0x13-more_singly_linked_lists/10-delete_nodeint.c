#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: double pointer to the first node of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev, *curr;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
curr = *head;
*head = (*head)->next;
free(curr);
return (1);
}

prev = *head;
curr = prev->next;
for (i = 1; curr != NULL && i < index; i++)
{  
prev = curr;
curr = curr->next;
}

if (curr != NULL && i == index)
{
prev->next = curr->next;
free(curr);
return (1);
}

return (-1);
}
