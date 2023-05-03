#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the list
 *
 * Return: count of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current, *pos;
if (head == NULL)
exit(98);
current = head;
while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;
pos = current;
current = current->next;
while (pos < current)
{
if (current == pos->next)
{
printf("-> [%p] %d\n", (void *)current, current->n);
exit(98);
}
pos = pos->next;
}
}
return (count);
}
