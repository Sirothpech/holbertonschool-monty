#include "monty.h"

/**
 * _mul - multiplies the second top element of the stack with
 * the top element of the stack.
 * @stack: pointer to the stack
 * @line_number: line number of the file being read
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	int mul;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		globalstatus = EXIT_FAILURE;
		return;
	}

	mul = (*stack)->next->n * (*stack)->n;
	(*stack)->next->n = mul;
	_pop(stack, line_number);
}
