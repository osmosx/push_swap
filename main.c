#include "push_swap.h"

t_list *create_node(int argc, char **argv)
{
	t_list	*node;
	t_list	*tmp;
	int		i;

	i = 1;
	node = malloc(sizeof(t_list));
	tmp = node;
	node->data = ft_atoi(argv[i]);
	node->id = 1;
	node->next = NULL;
	while (argc > 2)
	{
		i++;
		node->next = malloc(sizeof(t_list));
		node = node->next;
		node->data = ft_atoi(argv[i]);
		node->id = i;
		node->next = NULL;
		argc--;
	}
	return (tmp);
}

int main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;
	stack_a = create_node(argc, argv);
	stack_b = NULL;

    if (!check_sort(stack_a))
		return (-1);
	check_repeat(stack_a);
	sa(&stack_a);
	ra(&stack_a);
	while (stack_a)
	{
		printf("%d", stack_a->data);
		stack_a = stack_a->next;
	}
	return 0;
}
