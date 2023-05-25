#include "monty.h"
/**
 * pall - entry
 * @head: struct
 * @num: var
*/
void pall(stack_t **head, unsigned int num)
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
