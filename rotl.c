#include "monty.h"
/**
  *rotl- entry
  *@head: struct
  *@num: var
 */
void rotl(stack_t **head,  __attribute__((unused)) unsigned int num)
{
	stack_t *t = *head;
	stack_t *x;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	x = (*head)->next;
	x->prev = NULL;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = *head;
	(*head)->next = NULL;
	(*head)->prev = t;
	(*head) = x;
}
