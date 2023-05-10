#include "monty.h"

/**
 * free_stack - Frees a stack_t stack
 * @stack: Pointer to the top node of the stack
 */
void free_stack(stack_t *stack)
{
	stack_t *current;

	while (stack != NULL)
	{
		current = stack;
		stack = stack->next;
		free(current);
	}
}
