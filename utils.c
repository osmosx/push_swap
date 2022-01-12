/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nenvoy <nenvoy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:52:22 by nenvoy            #+#    #+#             */
/*   Updated: 2021/12/15 16:52:57 by nenvoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_node(t_list *node)
{
	t_list	*tmp;
	int		len;

	if (!node)
		return (0);
	len = 0;
	tmp = node;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}

void	sort_id(t_list **stack, int argc)
{
	t_list	*tmp;
	t_list	*min_tmp;
	int		i;
	int		j;

	j = 0;
	while (argc)
	{
		tmp = *stack;
		i = 2147483647;
		while (tmp)
		{
			if (tmp->data <= i && tmp->id == -1)
			{
				i = tmp->data;
				min_tmp = tmp;
			}
			tmp = tmp->next;
		}
		min_tmp->id += j;
		j++;
		argc--;
	}
}

void	score(t_list *stack)
{
	int	max;
	int	mid;
	int	i;

	i = 0;
	max = len_node(stack);
	mid = len_node(stack) / 2;
	while (i <= mid)
	{
		stack->score = i;
		stack = stack->next;
		i++;
	}
	if (max % 2 != 0)
		i--;
	else
		i -= 2;
	while (i)
	{
		stack->score = i;
		stack = stack->next;
		i--;
	}
}
