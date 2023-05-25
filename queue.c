#include "monty.h"
/**
 * f_queue - Sets the format of the data to a queue.
 * @head: Stack head.
 * @counter: line_number.
 * Return: No return.
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Add node to the tail stack.
 * @n: new-value.
 * @head: Head of the stack.
 * Return: No return.
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *tmpptr;

	tmpptr = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (tmpptr)
	{
		while (tmpptr->next)
			tmpptr = tmpptr->next;
	}
	if (!tmpptr)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tmpptr->next = new_node;
		new_node->prev = tmpptr;
	}
}
