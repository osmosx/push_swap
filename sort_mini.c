/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
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

void	mini_sort(int argc, t_list **stack_a)
{
	if (argc == 3)
		sort_two(&(*stack_a));
	if (argc == 4)
		sort_three(&(*stack_a));
}
