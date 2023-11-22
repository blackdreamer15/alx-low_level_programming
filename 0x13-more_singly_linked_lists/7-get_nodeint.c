#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: Pointer to head of list
 * @index: the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (node < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		node++;
	}

	return (head);
}
