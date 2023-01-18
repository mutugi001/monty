#include "monty.h"
/**
 * instruction_add - adds top 2 nodes of the stack
 * @stack: double pointer to top of stack
 * @line_number: value of node
 * Return: nothing
 */
void instruction_add(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;
	instruction_pop(stack, line_number);
	(*stack)->n += tmp;
}

/**
 * instruction_nop - doesn't do anything
 * @stack: double pointer to top of stack
 * @line_number: value of node
 * Return: nothing
 */
void instruction_nop(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	UNUSED(line_number);
}
