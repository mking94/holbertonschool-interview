#include "lists.h"

/**
 * check_cycle - Check if linked list is cycle.
 * @list: The element to be checked.
 * Retuen: 1 if cycle or 0 if not.
 */

int check_cycle(listint_t *list)
{

	listint_t *hare, *turtle = list;

	if (!list)
		return (0);

	hare = list->next;

	while (hare)
	{
		if (hare->next)
			hare = hare->next->next;
		else
			hare = hare->next;

		turtle = turtle->next;
		if (hare == turtle)
			return (1);
	}
	return (0);
}
