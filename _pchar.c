#include "monty.h"

/**
 * _pchar - prints the char at the top of the stack
 * @stack: pointer to the struct
 * @line_number: the number of the line read
 *
*/
void _pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		globalstatus = EXIT_FAILURE;
		return;
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		globalstatus = EXIT_FAILURE;
		return;
	}
		printf("%c\n", (*stack)->n);
}
