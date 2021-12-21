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

	max = max_data(*stack_a);
	min = min_data(*stack_a);
	mid = min + max / 2;

	while (len_node(*stack_a) != 3)
	{
		if ((*stack_a)->data == max || (*stack_a)->data == min
		|| (*stack_a)->data == mid)
			ra(stack_a);
		pb(stack_a,stack_b);
		if (!(check_sort(*stack_a)) && (len_node(*stack_a) == 3))
			sort_three(stack_a);
	}
}


