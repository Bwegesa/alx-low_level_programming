#include "lists.h"

/**
 * pop_listint - delete the head node and return it's value.
 * @head: pointer of a pointer to a listint_t
 *
 * Return: value of the delete node (INT)
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}

