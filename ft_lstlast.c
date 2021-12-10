#include "push_swap.h"

t_list	*ft_lstlast(t_list *node)
{
	t_list	*tmp;

	tmp = node;
	if (node == 0)
		return (0);
	while (tmp -> next != 0)
	{
		tmp = tmp -> next;
	}
	return (tmp);
}
