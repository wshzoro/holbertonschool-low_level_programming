#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print all element of a list_t
 * @h: pinter to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}

