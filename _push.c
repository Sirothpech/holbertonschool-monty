#include "monty.h"

/**
 * _push - funct that adds a new node at the beginning of a list.
 * @stack: pointer to the struct
 * @line_number: the number of the line read
 */

void _push(stack_t **stack, unsigned int line_number)
{
	char *value_str;
	int value;
	stack_t *new_node;

	/* Get the value argument as a string */
	value_str = strtok(NULL, " \n\t");

	/* Check if the value argument is missing */
	if (value_str == NULL || isdigit_string(value_str) == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		globalstatus = EXIT_FAILURE;
		return;
	}
	/* Convert the value argument to an integer */
	value = atoi(value_str);
	/* Create a new node and add it to the stack */
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		globalstatus = EXIT_FAILURE;
		return;
	}
	new_node->n = value;
	new_node->prev = NULL;
	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	new_node->next = *stack;
	*stack = new_node;
}
