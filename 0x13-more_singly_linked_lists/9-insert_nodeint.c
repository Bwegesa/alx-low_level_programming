#include "lists.h"


static listint_t *new_node(const int n);
/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position.
 *
 * @head: pointer of pointer to a listint_t
 * @idx: index of the list where the new node should be added
 * @n: value to set the new node to.
 *
 * Return: pointer to the head.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}
return (NULL);
}

