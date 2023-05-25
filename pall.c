#include "monty.h"
/**
 * f_pall - entry
 * @head: struct
 * @num: var
*/
void f_pall(stack_t **head, unsigned int num)
{
	stack_t *h;

	(void)num;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
