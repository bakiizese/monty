#include "monty.h"
/**
 * f_pop - entry
 * @head: struct
 * @num: var
*/
void f_pop(stack_t **head, unsigned int num)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
