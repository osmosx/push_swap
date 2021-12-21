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

	if (argc == 2)
		write(2, "Error: Nothing to sort!\n", 25);
	if (argc > 2)
	{
		stack_a = create_node(argc, argv);
		check(stack_a);
		stack_b = NULL;
		sort(argc, &stack_a, &stack_b);
		while (stack_a)
		{
			printf("stack_a=%d\n", stack_a->data);
			stack_a = stack_a->next;
		}
		while (stack_b)
		{
			printf("stack_b=%d\n", stack_b->data);
			stack_b = stack_b->next;
		}
//		free_node(stack_a);
//		free_node(stack_b);
	}
	return (0);
}
