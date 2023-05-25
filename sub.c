#include "monty.h"
/**
  *f_sub- Subtract first top element from second.
  *@head: Stack head.
  *@counter: line_number.
  *Return: No return.
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *tmpptr;
	int sub, nodes;

	tmpptr = *head;
	for (nodes = 0; tmpptr != NULL; nodes++)
		tmpptr = tmpptr->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmpptr = *head;
	sub = tmpptr->next->n - tmpptr->n;
	tmpptr->next->n = sub;
	*head = tmpptr->next;
	free(tmpptr);
}
