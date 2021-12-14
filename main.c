#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;

	if (argc > 1)
	{
		stack_a = create_node(argc, argv);
		stack_b = NULL;
		if (!check_sort(stack_a))
			return (-1);
		check_repeat(stack_a);
		//	rra(&stack_a);
		//	sa(&stack_a);
		//	ra(&stack_a);
		pb(&stack_a, &stack_b);
		pb(&stack_a, &stack_b);
		while (stack_a)
		{
			printf("%d\n", stack_a->data);
			stack_a = stack_a->next;
		}
		printf("stack_b=%d\n", stack_b->data);

		pa(&stack_a, &stack_b);
		pa(&stack_a, &stack_b);


		printf("stack_a=%d", stack_a->data);
		printf("stack_a=%d", stack_a->next->data);
	}
	return 0;
}