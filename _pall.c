#include "monty.h"

/**
 * _pall - prints all the values on the stack, start from the top of the stack.
 * @stack: pointer to the top of the stack
 * @line_number: line number in the file where the opcode is located
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void) line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
