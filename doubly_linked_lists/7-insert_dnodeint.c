#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: data to store in the node
 *
 * Return: saddress of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *current;
unsigned int i;

if (idx == 0)
return (add_dnodeint(h, n));

if (*h == NULL)
return (NULL);

current = *h;
for (i = 0; i < idx - 1; i++)
{
current = current->next;
if (current == NULL)
return (NULL);
}
if (current->next == NULL)
return (add_dnodeint(h, n));

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = current->next;
new_node->prev = current;
current->next->prev = new_node;
current->next = new_node;

return (new_node);
}
