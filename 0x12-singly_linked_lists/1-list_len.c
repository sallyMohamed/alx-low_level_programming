#include "lists.h"
/**
 * list_len - returnelements in a list.
 * @h: singlylinked list.
 * Return: elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
