#include "lists.h"
/**
 * dlistint_len -to determine the length of a linked list
 *@h: head pointer
 * Return: the length of a linked list
 */


size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
