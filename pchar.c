#include "monty.h"
/**
 * fun_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @stack_head: stack_head
 * @counter: line_number
 * Return: no return
*/
void fun_pchar(stack_t **stack_head, unsigned int counter)
{
	stack_t *h;

	h = *stack_head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
