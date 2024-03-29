#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_nodeint - add a new node at the beginning of a listint_t.
*
* @head: adress.
* @n: integer.
*
* Return: the address of the new element.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
if (head == NULL)
{
return (NULL);
}
else
{
new_node = malloc(sizeof(new_node));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
else
{
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
}
}
