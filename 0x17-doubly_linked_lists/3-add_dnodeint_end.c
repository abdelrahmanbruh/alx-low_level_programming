#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of the list
 * @head: pointer to head
 * @n: int to set to the new node
 * Return: new element
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *aux = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (aux)
{
while (aux->next)
aux = aux->next;
new->prev = aux;
aux->next = new;
}
else
{
*head = new;
new->prev = NULL;
}
return (new);
}
