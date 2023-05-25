#include "monty.h"
/**
 * pint - entry
 * @head: struct
 * @num: var
*/
void pint(stack_t **head, unsigned int num)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
