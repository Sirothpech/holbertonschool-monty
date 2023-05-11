#include "monty.h"

/**
 * _div - function that divides the top two elements of the stack
 * @stack: pointer to the stack
 * @line_number: line number of the file being read
 */
void _div(stack_t **stack, unsigned int line_number)
{
	int div;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		globalstatus = EXIT_FAILURE;
		return;
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		globalstatus = EXIT_FAILURE;
		return;
	}

	div = (*stack)->next->n / (*stack)->n;
	(*stack)->next->n = div;
	_pop(stack, line_number);
}
