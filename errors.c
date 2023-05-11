#include "monty.h"

/**
 * error_usage - Check if the number of arguments is two
 * @argc: the number of arguments
 */
void error_usage(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * error_open_file - Check if the open is good
 * @fp: the pointer of the file
 * @argv: the pointer to the arguments
 */
void error_open_file(FILE *fp, char **argv)
{
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
}
