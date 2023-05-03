#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the first node in the list.
 *
 * Return: The head node's data (n).
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *temp;

if (*head == NULL)
return (0);

n = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (n);
}
