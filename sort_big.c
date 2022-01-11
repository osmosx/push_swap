/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nenvoy <nenvoy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:52:22 by nenvoy            #+#    #+#             */
/*   Updated: 2021/12/15 16:52:57 by nenvoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(t_list **stack_a, t_list **stack_b)
{
	int	max;
	int	mid;
	int	min;

	min = 0;
	max = len_node(*stack_a);
	mid = len_node(*stack_a) / 2;
	while (len_node(*stack_a) != 3)
	{
		if ((*stack_a)->id == max || (*stack_a)->id == min
			|| (*stack_a)->id == mid)
			ra(stack_a);
		else if ((*stack_a)->id < mid)
			pb(stack_a, stack_b);
		else if ((*stack_a)->id > mid)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
		}
		if (!(check_sort(*stack_a)) && (len_node(*stack_a) == 3))
			sort_three(stack_a);
	}
}


