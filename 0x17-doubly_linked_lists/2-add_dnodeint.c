#include "lists.h"

/**
 * add_dnodeint - add a new node to the beggining
 * @head: pointer to head
 * @n: number
 * Return: place of the element
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->prev = NULL;
new->next = *head;
if (*head)
{
(*head)->prev = new;
}
*head = new;
return (new);
}
