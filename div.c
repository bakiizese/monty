#include "monty.h"
/**
 * div - entry
 * @head: struct
 * @num: var
 * Return: no return
*/
void div(stack_t **head, unsigned int num)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = h->next->n / h->n;
	h->next->n = x;
	*head = h->next;
	free(h);
}
