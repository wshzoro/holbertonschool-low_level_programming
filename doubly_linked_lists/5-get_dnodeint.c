#include "lists.h"

/**
 * get_dnodeint_at_index - that returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: pointer to the node at the given index, or return NULL
 * if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *current = head;

while (current != NULL)
{
if (count == index)
return (current);

current = current->next;
count++;
}
return (NULL);
}
