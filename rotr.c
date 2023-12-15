#include "monty.h"
/**
  *fun_rotr- rotates the stack to the bottom
  *@stack_head: stack_head
  *@counter: line_number
  *Return: no return
 */
void fun_rotr(stack_t **stack_head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *stack_head;
	if (*stack_head == NULL || (*stack_head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *stack_head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*stack_head)->prev = copy;
	(*stack_head) = copy;
}
