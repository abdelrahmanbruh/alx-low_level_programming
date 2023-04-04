#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns number of elements in a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: Count of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
