#include "lists.h"
/**
* free_listint - Frees a linked list of integers.
*
* @head: A pointer to the head of the linked list.
*
* Description: This function frees a linked list of integers.
*
* Return: Nothing.
*/
void free_listint(listint_t *head)
{
listint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
