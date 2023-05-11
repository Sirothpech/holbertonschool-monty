#include "monty.h"

/**
 * get_opcode_func - function to chech if the opcode exist in the struct
 * @opcode: the opcode to check
 * Return: the pointer of the function  associated
*/
void (*get_opcode_func(char *opcode))(stack_t **, unsigned int)
{
	instruction_t instructions[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub),
		{NULL, NULL}
	};
	int i;

	for (i = 0; instructions[i].opcode; i++)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
			return (instructions[i].f);
	}
	globalstatus = EXIT_FAILURE;
	return (NULL);
}
