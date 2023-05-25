#include "monty.h"
/**
 * f_rotr - entry
 * @head: struct
 * @num: var
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int num)
{
	stack_t *cp;

	cp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cp->next)
	{
		cp = cp->next;
	}
	cp->next = *head;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*head)->prev = cp;
	(*head) = cp;
}
