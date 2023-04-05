#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t
 *
 * @head: pointer
 * @index: index of the node
 *
 * Return: the nth node of LL or NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *nth_node;
unsigned int i;
nth_node = head;
i = 0;
while (nth_node != NULL && i < index)
{
nth_node = nth_node->next;
i++;
}
return (nth_node);
}
