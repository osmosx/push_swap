#include "push_swap.h"

void pb (t_list **stack_a, t_list **stack_b)
{
	t_list *tmp;

	if (stack_a && stack_b)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
		write(1, "pb\n", 3);
	}
}

void pa (t_list **stack_a, t_list **stack_b)
{
	t_list *tmp;

	if (stack_a && stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
		write(1, "pa\n", 3);
	}
}