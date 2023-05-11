#include "monty.h"

/**
 * _add - function that adds the top two elements of the stack
 * @stack: pointer to the stack
 * @line_number: line number of the file being read
 */
void _add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		globalstatus = EXIT_FAILURE;
		return;
	}

	sum = (*stack)->n + (*stack)->next->n;
	(*stack)->next->n = sum;
	_pop(stack, line_number);
}
