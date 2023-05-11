#include "monty.h"

/**
 * _pint - function that prints the value at the top of the stack.
 * @stack: pointer to the struct
 * @line_number: the number of the line read
 *
*/
void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		globalstatus = EXIT_FAILURE;
	        return;
	}
	printf("%u\n", (*stack)->n);
}
