#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to the address of the first node in the list
 * @idx: index of the node to insert
 * @n: value for a new node
 *
 * Return: pointer to the indexed node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;

	if (head == NULL)
		return (NULL);
	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (current == NULL && idx == 0)
	{
		new->next = NULL;
		current = new;
		return (new);
	}
	while (current != NULL)
	{
		if (idx == 0)
		{
			new->next = current;
			current->next = new;
			return (new);
		}
		current = (current)->next;
		idx--;
	}
	return (NULL);
}
