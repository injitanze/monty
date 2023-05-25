#include "monty.h"
/**
 * f_add - Adds top two elements of the stack.
 * @head: Stack head.
 * @counter: line_number.
 * Return: No return.
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, tmpptr;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	tmpptr = h->n + h->next->n;
	h->next->n = tmpptr;
	*head = h->next;
	free(h);
}
