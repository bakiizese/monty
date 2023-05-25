#include "monty.h"
/**
 * add - entry
 * @head: struct
 * @num: var
*/
void add(stack_t **head, unsigned int num)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = x;
	*head = h->next;
	free(h);
}
