/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nenvoy <nenvoy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:52:22 by nenvoy            #+#    #+#             */
/*   Updated: 2021/12/15 16:52:57 by nenvoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **stack_a)
{
	if (((*stack_a)->data > (*stack_a)->next->data))
		sa(stack_a);
}

void	sort_three(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->data;
	b = (*stack_a)->next->data;
	c = (*stack_a)->next->next->data;
	if ((a > b) && (b < c) && (c > a))
		sa(stack_a);
	if ((a > b) && (b > c) && (c < a))
	{
		sa(stack_a);
		rra(stack_a);
	}
	if ((a > b) && (b < c) && (c < a))
		ra(stack_a);
	if ((a < b) && (b > c) && (c > a))
	{
		sa(stack_a);
		ra(stack_a);
	}
	if ((a < b) && (b > c) && (c < a))
		rra(stack_a);
}

void	sort_four_six(t_list **stack_a, t_list **stack_b)
{
	while (len_node(*stack_a) != 3)
	{
		while ((*stack_a)->data != min_data(*stack_a))
			ra(stack_a);
		pb(stack_a, stack_b);
		if (!(check_sort(*stack_a)) && (len_node(*stack_a) == 3))
			sort_three(stack_a);
	}
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	sort(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc == 3)
		sort_two(stack_a);
	if (argc == 4)
		sort_three(stack_a);
	if (argc >= 5 && argc <= 7)
		sort_four_six(stack_a, stack_b);
	if (argc > 7 && argc <= 101)
		sort_100(stack_a, stack_b);
	if (argc > 101)
		sort_500(stack_a, stack_b);
}
