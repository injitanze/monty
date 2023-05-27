#include "monty.h"

/**
 * opcodes - selects the correct opcode to perform
 *
 * @opc: opcode passed
 *
 * Return: pointer to the function that executes the opcode
 */
void (*opcodes(char *opc))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruct[] = {
		{"push",f_push},
		{"pall", f_pall},
		{"pint", f_pint},
		{"pop", f_pop},
		{"swap", f_swap},
		{"queue", f_queue},
		{"stack", f_stack},
		{"add", f_add},
		{"nop", f_nop},
		{"sub", f_sub},
		{"mul", f_mul},
		{"div", f_div},
		{"mod", f_mod},
		{"pchar", f_pchar},
		{"pstr", f_pstr},
		{"rotl", f_rotl},
		{"rotr", f_rotr},
		{NULL, NULL}
	};
	int y;

	for (y = 0; instruct[y].opcode; y++)
	{
		if (strcmp(instruct[y].opcode, opc) == 0)
			break;
	}

	return (instruct[y].f);
}
