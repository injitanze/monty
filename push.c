#include "monty.h"
/**
 * f_push - Add node to stack.
 * @head: Stack head.
 * @counter: Line_number.
 * Return: No return.
*/
void f_push(stack_t **head, unsigned int counter)
{
	int y, z = 0, tag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			z++;
		for (; bus.arg[z] != '\0'; z++)
		{
			if (bus.arg[z] > 57 || bus.arg[z] < 48)
				tag = 1; }
		if (tag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	y = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, y);
	else
		addqueue(head, y);
}
