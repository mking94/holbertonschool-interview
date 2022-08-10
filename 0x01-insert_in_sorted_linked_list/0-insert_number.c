#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly linked list.
 * @head: The list.
 * @number: The input.
 * Return: New linked list;
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *node;
	node = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (*head == NULL || (*head)->n >= new->n)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (node = *head; node != NULL; node = node->next)
	{
		if (node->next == NULL || node->next->n > new->n)
		{

			new->next = node->next;
			node->next = new;
			break;
		}
	}
	return (new);
}
