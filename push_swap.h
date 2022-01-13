/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nenvoy <nenvoy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:47:03 by nenvoy            #+#    #+#             */
/*   Updated: 2021/12/15 16:49:40 by nenvoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	int				id;
	int				index;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);
t_list	*create_node(int argc, char **argv);
int		check_repeat(t_list *node);
int		check_sort(t_list *node);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list *stack_a, t_list *stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list *stack_a, t_list *stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list *stack_a, t_list *stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
int		check(t_list *node);
void	sort_two(t_list **stack_a);
void	sort_three(t_list **stack_a);
void	sort_four_six(t_list **stack_a, t_list **stack_b);
void	sort_100(t_list **stack_a, t_list **stack_b);
void	sort_500(t_list **stack_a, t_list **stack_b);
void	sort(int argc, t_list **stack_a, t_list **stack_b);
int		min_data(t_list *node);
int		len_node(t_list *node);
void	sort_id(t_list **stack, int argc);
#endif