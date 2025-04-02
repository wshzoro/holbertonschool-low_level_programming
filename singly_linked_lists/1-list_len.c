#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointers to the head of the list
 *
 * Return: number of the elements of the list
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
