/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nenvoy <nenvoy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:44:58 by nenvoy            #+#    #+#             */
/*   Updated: 2021/12/15 16:45:17 by nenvoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	new_node(int i, t_list *node, int argc, char **argv)
{
	while (argc > 2)
	{
		i++;
		node->next = malloc(sizeof(t_list));
		if (!node->next)
			return ;
		node = node->next;
		node->data = ft_atoi(argv[i]);
		node->id = -1;
		node->score = -1;
		node->index = i;
		node->next = NULL;
		argc--;
	}
}

t_list	*create_node(int argc, char **argv)
{
	t_list	*node;
	t_list	*tmp;
	int		i;

	i = 1;
	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	tmp = node;
	node->data = ft_atoi(argv[i]);
	node->id = -1;
	node->index = i;
	node->score = -1;
	node->next = NULL;
	new_node(i, &(*node), argc, argv);
	return (tmp);
}
