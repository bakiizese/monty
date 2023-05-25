#include "monty.h"
/**
 * f_queue - entry
 * @head: struct
 * @num: var
*/
void f_queue(stack_t **head, unsigned int num)
{
	(void)head;
	(void)num;
	bus.lifi = 1;
}

/**
 * addqueue - entry
 * @n: var
 * @head: struct
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new = malloc(sizeof(stack_t));
	stack_t *x;

	x = *head;
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = n;
	new->next = NULL;
	if (x)
	{
		while (x->next)
			x = x->next;
	}
	if (!x)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		x->next = new;
		new->prev = x;
	}
}
