#include "push_swap.h"

void	ra(t_list **stack_a)
{
	t_list *last;
	t_list *first;

	if ((*stack_a)->next)
	{
		last = *stack_a;
		first = (*stack_a)->next;
		while ((*stack_a)->next)
			*stack_a = (*stack_a)->next;
		(*stack_a)->next = last;
		last->next = NULL;
		*stack_a = first;
	}
	write(1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	t_list *last;
	t_list *first;

	if ((*stack_b)->next)
	{
		last = *stack_b;
		first = (*stack_b)->next;
		while ((*stack_b)->next)
			*stack_b = (*stack_b)->next;
		(*stack_b)->next = last;
		last->next = NULL;
		*stack_b = first;
	}
	write(1, "rb\n", 3);
}

void rr (t_list **stack_a, t_list **stack_b)
{
	if (((*stack_a)->next) && ((*stack_b)->next))
	{
		ra(stack_a);
		rb(stack_b);
	}
	write(1, "rr\n", 3);
}