#include "monty.h"
/**
 * f_pstr - entry
 * @head: struct
 * @num: var
*/
void f_pstr(stack_t **head, unsigned int num)
{
	stack_t *h;

	(void)num;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
