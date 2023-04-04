#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the node at a an index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer node we looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;
while (current != NULL)
{
if (count == index)
return (current);
count++;
current = current->next;
}
return (NULL);
}
