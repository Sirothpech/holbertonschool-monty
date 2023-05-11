#include "monty.h"
int globalstatus = EXIT_SUCCESS;
/**
 * main - Entry point for the Monty interpreter
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */

int main(int argc, char **argv)
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;
	char *opcode;
	stack_t *stack = NULL;

	error_usage(argc);
	fp = fopen(argv[1], "r");
	error_open_file(fp, argv);
	while ((read = getline(&line, &len, fp)) != -1)
	{
		line_number++;
		opcode = strtok(line, " \t\n");
		if (opcode == NULL || *opcode == '#')
			continue;
		if (get_opcode_func(opcode) == NULL)
		{
			if (globalstatus == EXIT_FAILURE)
				fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
			break;
		}
		get_opcode_func(opcode)(&stack, line_number);
	}
	free_stack(stack);
	free(line);
	fclose(fp);
	if (globalstatus == EXIT_FAILURE)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}
