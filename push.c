#include "monty.h"
/**
 * my_push_f - push value to stack or queue
 * @data_str: struct conainer
 * @line_number: number of line read in file
 */
void my_push_f(stack_t **data_str, unsigned int line_number)
{
	int j, change = 0;

	if (cont.arguments)
	{
		if (cont.arguments[0] == '-')
			j = 1;
		else
			j = 0;
		for (; cont.arguments[j] != '\0'; j++)
		{
			if (cont.arguments[j] < 48 || cont.arguments[j] > 57)
				change = 1;
		}
		if (change == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			free_structure(*data_str), free(cont.line), fclose(cont.my_file);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_structure(*data_str), free(cont.line), fclose(cont.my_file);
		exit(EXIT_FAILURE);
	}
	if (cont.check == 0)
		add_node_first(data_str, atoi(cont.arguments));
/*	else*/
/*		en_queue(data_str,  atoi(cont.arguments));*/
}
