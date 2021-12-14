#include "push_swap.h"

void sa (t_list **stack_a)
{
	t_list *tmp;

	if ((*stack_a)->next)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = (*stack_a)->next->next;
		tmp->next = (*stack_a);
		(*stack_a) = tmp;
		free(tmp);
		write(1, "sa\n", 3);
	}
	else
		return ;
}

void sb (t_list **stack_b)
{
	t_list *tmp;

	if ((*stack_b)->next)
	{
		tmp = (*stack_b)->next;
		(*stack_b)->next = (*stack_b)->next->next;
		tmp->next = (*stack_b);
		(*stack_b) = tmp;
		free(tmp);
		write(1, "sb\n", 3);
	}
	else
		return ;
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	if ((stack_a->next) && (stack_b->next))
	{
		sa(&stack_a);
		sb(&stack_b);
		write(1, "ss\n", 3);
	}
	else
		return ;
}
