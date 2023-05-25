#include "monty.h"
/**
 * f_mod - Computes rest of the division of second top element by the top element of the stack.
 * @head: Stack head.
 * @counter: line_number.
 * Return: No return.
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmpptr = h->next->n % h->n;
	h->next->n = tmpptr;
	*head = h->next;
	free(h);
}
