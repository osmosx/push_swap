/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maybe.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nenvoy <nenvoy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:52:22 by nenvoy            #+#    #+#             */
/*   Updated: 2021/12/15 16:52:57 by nenvoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_data(t_list *node)
{
	t_list	*tmp;
	int		min;

	if (!node)
		return (0);
	tmp = node;
	min = node->data;
	while (tmp->next)
	{
		if (min > tmp->next->data)
			min = tmp->next->data;
		tmp = tmp->next;
	}
	return (min);
}

int	max_data(t_list *node)
{
	t_list	*tmp;
	int		max;

	if (!node)
		return (0);
	tmp = node;
	max = node->data;
	while (tmp->next)
	{
		if (max < tmp->next->data)
			max = tmp->next->data;
		tmp = tmp->next;
	}
	return (max);
}

void	free_node(t_list *node)
{
	t_list	*tmp;

	while (node)
	{
		tmp = node;
		node = node->next;
		if (tmp)
			free(tmp);
	}
	node = NULL;
}
