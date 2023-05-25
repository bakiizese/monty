#include "monty.h"
/**
 * addnode - entry
 * @head: struct
 * @n: var
*/
void addnode(stack_t **head, int n)
{

	stack_t *new;
	stack_t *h;

	h = *head;
	node = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (h)
		h->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
