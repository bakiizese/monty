#include "monty.h"
/**
 * f_sub - entry
 * @head: struct
 * @num: var
 */
void f_sub(stack_t **head, unsigned int num)
{
	stack_t *x;
	int s;
	int j;

	x = *head;
	for (j = 0; x != NULL; j++)
		x = x->next;
	if (j < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	s = x->next->n - x->n;
	x->next->n = s;
	*head = x->next;
	free(x);
}
