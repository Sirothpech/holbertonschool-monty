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

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, fp)) != -1)
	{
		line_number++;
		opcode = strtok(line, " \t\n");
		if (opcode == NULL || *opcode == '#')
			continue;
		if (get_opcode_func(opcode) == NULL || globalstatus == EXIT_FAILURE)
		{
			if (globalstatus != EXIT_FAILURE)
				fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
			free_stack(stack);
			free(line);
			fclose(fp);
			exit(EXIT_FAILURE);
		}
		get_opcode_func(opcode)(&stack, line_number);
	}
	free_stack(stack);
	free(line);
	fclose(fp);
	exit(EXIT_SUCCESS);
}
