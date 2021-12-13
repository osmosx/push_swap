#include "push_swap.h"

void check_repeat (t_list *node)
{
	t_list *search;

	search = node;
	while (node)
	{
		search = node;
		while (search)
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

