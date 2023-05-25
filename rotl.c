#include "monty.h"
/**
  *f_rotl- Rotates the stack to the top.
  *@head: Stack head.
  *@counter: line_number.
  *Return: No return.
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *tmpptr;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	tmpptr = (*head)->next;
	tmpptr->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = tmpptr;
}
