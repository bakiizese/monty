#include "monty.h"
/**
 * swap - entry
 * @head: struct
 * @num: var
*/
void swap(stack_t **head, unsigned int num)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	x = h->n;
	h->n = h->next->n;
	h->next->n = x;
}
