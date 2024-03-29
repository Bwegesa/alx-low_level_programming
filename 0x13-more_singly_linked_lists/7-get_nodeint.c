#include "lists.h"

/**
 * get_nodeint_at_index - returns a pointer of a nth node.
 * @head: pointer to a head of a list.
 * @index: which node to fetch from a list starting at 0.
 *
 * Return: pointer to a node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
