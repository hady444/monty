#include "monty.h"
/**
 * apply_fun - take each function
 * @data_str: structure container
 * @line_number: number read from file
 * Return: 1 if success, 0 if error
 */
int apply_fun(stack_t **data_str, unsigned int line_number)
{
	instruction_t op_cont[] = {
		{"push", my_push_f},
		{"pall", my_pall_f},
		{"pint", my_pint_f},
		{"pop", my_pop_f},
		{"swap", my_swap_f},
		{"add", my_add_f},
		{"nop", my_nop_f},
		{"sub", my_sub_f},
		{"div", my_div_f},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *my_op_f;

	my_op_f = strtok(cont.line, " \n\t");
	if (my_op_f && my_op_f[0] == '#')
		return (1);
	cont.arguments = strtok(NULL, " \n\t");
	while (op_cont[i].opcode && my_op_f)
	{
		if (strcmp(my_op_f, op_cont[i].opcode) == 0)
		{
			op_cont[i].f(data_str, line_number);
			return (1);
		}
		i++;
	}
	if (my_op_f && op_cont[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, my_op_f);
		fclose(cont.my_file), free(cont.line), free_structure(*data_str);
		exit(EXIT_FAILURE);
	}
	return (0);
}
