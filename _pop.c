#include "monty.h"

/**
 * _pop - removes the top element of the stack
 * @stack: pointer to the struct
 * @line_number: the number of the line read
 *
*/
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		globalstatus = EXIT_FAILURE;
		return;
	}
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
}
