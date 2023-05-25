#include "monty.h"
/**
 * f_mul - entry.
 * @head: struct
 * @num: var
*/
void f_mul(stack_t **head, unsigned int num)
{
	stack_t *h;
	int l = 0;
	int x;

	h = *head;

	while (h)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	x = h->next->n * h->n;
	h->next->n = x;
	*head = h->next;
	free(h);
}
