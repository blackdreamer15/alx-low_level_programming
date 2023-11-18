#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list
 *
 * Return: the number of elements in the list_t list
 */
size_t list_len(const list_t *h)
{
	register unsigned int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
