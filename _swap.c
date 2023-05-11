#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack
 * @stack: pointer to the struct
 * @line_number: the number of the line read
 *
*/
void _swap(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		/*Not enough elements in the list to perform the swap */
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		globalstatus = EXIT_FAILURE;
		return;
	}

	stack_t *first = *stack;
	stack_t *second = first->next;

	/*Adjust the pointers for the neighboring nodes */
	first->next = second->next;
	if (second->next != NULL)
	{
		second->next->prev = first;
	}

	/*Update the previous and next pointers for the swapped nodes */
	second->prev = NULL;
	second->next = first;
	first->prev = second;

	/*Update the stack pointer to point to the new top node */
	*stack = second;
}
