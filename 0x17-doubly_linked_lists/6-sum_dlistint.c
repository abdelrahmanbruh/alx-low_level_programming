#include "lists.h"

/**
 * sum_dlistint - calc sum of all lists
 * @head: pointer to head
 * Return: sum of all lists
 **/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *node = head;
int sum = 0;
while (node)
{
sum += node->n;
node = node->next;
}
return (sum);
}
