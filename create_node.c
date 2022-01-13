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

static void	new_node(t_list *node, int argc, char **argv)
{
	int	i;

	i = 1;
	while (argc > 2)
	{
		i++;
		node->next = malloc(sizeof(t_list));
		if (!node->next)
			return ;
		node = node->next;
		node->data = ft_atoi(argv[i]);
		node->id = -1;
		node->index = i;
		node->next = NULL;
		argc--;
	}
}

t_list	*create_node(int argc, char **argv)
{
	t_list	*node;
	t_list	*tmp;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	tmp = node;
	node->data = ft_atoi(argv[1]);
	node->id = -1;
	node->index = 1;
	node->next = NULL;
	new_node(&(*node), argc, argv);
	return (tmp);
}
