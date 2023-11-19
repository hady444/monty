#include "monty.h"
cont_t cont = INIT_CONT;
/**
 * main - main func
 * @argc: arguments length
 * @argv: arguments passed
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	FILE *file;
	ssize_t get_read = 1;
	size_t get_size = 0;
	char *line;
	stack_t *data_str = NULL;
	unsigned int line_count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	cont.my_file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	while (get_read >= 1)
	{
		line = NULL;
		get_size = 0;
		get_read = getline(&line, &get_size, file);
		cont.line = line;
		line_count++;
		if (get_read < 1)
		{
			free(line);
			break;
		}
		apply_fun(&data_str, line_count);
		free(line);
	}
	fclose(file), free_structure(data_str);
	return (0);
}
