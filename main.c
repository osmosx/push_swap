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

void check_repeat (t_list *node)
{
	t_list *search;

	search = node;
	while (node != NULL)
	{
		search = node;
		while (search != NULL)
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

int check_sort (t_list *node)
{
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (-1);
		node = node->next;
	}
	return (0);
}

int main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;
	stack_a = create_node(argc, argv);
	stack_b = NULL;

    check_sort(stack_a);
	check_repeat(stack_a);
//	sa(stack_a);
	ra(&stack_a);
	while (stack_a)
	{
		printf("%d", stack_a->data);
		stack_a = stack_a->next;
	}
	return 0;
}
