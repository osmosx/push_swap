#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_list
{
	int				data;
	int 			id;
	struct s_list	*next;
}	t_list;

int	ft_atoi(const char *str);
t_list *create_node(int argc, char **argv);
void check_repeat (t_list *node);
int check_sort (t_list *node);
t_list	*ft_lstlast(t_list *node);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list *stack_a, t_list *stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void 	rr(t_list *stack_a, t_list *stack_b);
#endif