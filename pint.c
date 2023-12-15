#include "monty.h"
/**
 * fun_pint - prints the top
 * @stack_head: stack_head
 * @counter: line_number
 * Return: no return
*/
void fun_pint(stack_t **stack_head, unsigned int counter)
{
	if (*stack_head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack_head)->n);
}
