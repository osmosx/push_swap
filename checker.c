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

void	check_repeat(t_list *node)
{
	t_list	*search;

	while (node)
	{
		search = node;
		while (search)
		{
			if ((node->data == search->data)
				&& (node->id != search->id))
			{
				write (1, "Error: repeated values!\n", 25);
				exit(0);
			}
			search = search->next;
		}
		node = node->next;
	}
}

int	check_sort(t_list *node)
{
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (-1);
		node = node->next;
	}
	return (0);
}

int	check(t_list *node)
{
	if (!check_sort(node))
		write(1, "Data sorted\n", 13);
	check_repeat(node);
	return (0);
}
