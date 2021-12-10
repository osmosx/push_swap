#include "push_swap.h"

//void	sa(t_list **stack_a)
//{
//	t_list *tmp;
//
//	if ((*stack_a)->next != NULL)
//	{
//		if ((*stack_a)->next != NULL)
//		{
//			tmp = (*stack_a)->next;
//			printf("tmp = %d\n", tmp->data);
//			(*stack_a)->next = (*stack_a)->next->next;
//			printf("node-> next = %d\n", (*stack_a)->next->data);
//			tmp->next = (*stack_a);
//			printf("tmp->next = %d\n", tmp->next->data);
//			(*stack_a) = tmp;
//			printf("node = %d\n", (*stack_a)->data);
//			tmp = NULL;
//		}
//		write(1, "sa\n", 3);
//	}
//}

void sa(t_list *stack_a)
{
	int tmp;

	if (stack_a->next != NULL)
	{
		tmp = stack_a->next->data;
		stack_a->next->data = stack_a->data;
		stack_a->data = tmp;
	}
	write(1, "sa\n", 3);
}

void sb(t_list *stack_b)
{
	int tmp;

	if (stack_b->next != NULL)
	{
		tmp = stack_b->next->data;
		stack_b->next->data = stack_b->data;
		stack_b->data = tmp;
	}
	write(1, "sb\n", 3);
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}