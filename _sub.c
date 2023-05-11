#include "monty.h"

/**
 * _sub - function that subs the top two elements of the stack
 * @stack: pointer to the stack
 * @line_number: line number of the file being read
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	int sub;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		globalstatus = EXIT_FAILURE;
		return;
	}

	sub = (*stack)->next->n - (*stack)->n;
	(*stack)->next->n = sub;
	_pop(stack, line_number);
}
