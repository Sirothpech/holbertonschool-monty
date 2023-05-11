#include "monty.h"

/**
 * _mod - function that divides the top two elements of the stack
 * @stack: pointer to the stack
 * @line_number: line number of the file being read
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	int mod;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		globalstatus = EXIT_FAILURE;
		return;
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		globalstatus = EXIT_FAILURE;
		return;
	}

	mod = (*stack)->next->n % (*stack)->n;
	(*stack)->next->n = mod;
	_pop(stack, line_number);
}
