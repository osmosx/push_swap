/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nenvoy <nenvoy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:43:10 by nenvoy            #+#    #+#             */
/*   Updated: 2021/12/15 16:44:45 by nenvoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_repeat(t_list *node)
{
	t_list	*search;

	while (node)
	{
		search = node;
		while (search)
		{
			if ((node->data == search->data)
				&& (node->index != search->index))
				return (-1);
			search = search->next;
		}
		node = node->next;
	}
	return (0);
}

int	check_sort(t_list *node)
{
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	return (-1);
}

int	check(t_list *node)
{
	if (check_sort(node))
	{
		write(2, "Data sorted!\n", 13);
		exit (0);
	}
	if (check_repeat(node))
	{
		write(2, "Error: repeated values!\n", 25);
		exit (0);
	}
	return (0);
}
