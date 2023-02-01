#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head's node's data (n)
*/
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp, next;

	if (*head == NULL)
		return (0);

	temp = *head;
	next = tenp->next;
	first_node = temp->n;
	free(temp);

	return (first_node);
}
