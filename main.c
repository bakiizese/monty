#include "monty.h"
/**
* main - entry
* @argc: count var
* @argv: arg var
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	bus_t bus = {NULL, NULL, NULL, 0};
	char *con;
	FILE *file;
	unsigned int num;
	size_t s;
	ssize_t r_line;
	stack_t *stack = NULL;

	num = 0;
	s = 0;
	r_line = 1;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_line > 0)
	{
		con = NULL;
		r_line = getline(&con, &s, file);
		bus.con = con;
		num++;
		if (r_line > 0)
		{
			execute(con, &stack, num, file);
		}
		free(con);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
