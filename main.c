/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nenvoy <nenvoy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:46:34 by nenvoy            #+#    #+#             */
/*   Updated: 2021/12/15 16:46:43 by nenvoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc < 2)
		write(2, "Error: Specify data for sorting\n", 33);

	else
	{
		stack_a = create_node(argc, argv);
		stack_b = NULL;
		check(stack_a);
		mini_sort(argc, &stack_a);
		while (stack_a)
		{
			printf("%d", stack_a->data);
			stack_a = stack_a->next;
		}
	}
	return (0);
}
