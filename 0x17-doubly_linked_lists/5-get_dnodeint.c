#include "lists.h"

/**
 * get_dnodeint_at_index - return node at the num list
 * @head: pointer to the head
 * @index: the element at node
 * Return: the at node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *node = head;
unsigned int cont = 0;
while (node && cont != index)
{
cont++;
node = node->next;
}
if (node && cont == index)
{
return (node);
}
return (NULL);
}
