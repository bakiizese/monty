#include "monty.h"
/**
 * f_push - entry
 * @head: struct
 * @num: var
*/
void f_push(stack_t **head, unsigned int num)
{
	int n;
	int f = 0;
	int i = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				f = 1; }
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(bus.file);
			free(bus.cont);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
