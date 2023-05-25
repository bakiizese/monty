#include "monty.h"
/**
* free_stack - entry
* @head: struct
*/
void free_stack(stack_t *h)
{
	stack_t *x;

	x = h;
	while (h)
	{
		x = h->next;
		free(h);
		h = x;
	}
}
