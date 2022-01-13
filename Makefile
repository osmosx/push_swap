NAME = push_swap
#
FLAGS = -Wall -Werror -Wextra
#
HEADER = push_swap.h
#
SRCS 	= 	main.c\
 			ft_atoi.c\
 			swap.c\
 			rotate.c\
 			reverse.c\
 			push.c\
 			create_node.c\
 			checker.c\
 			sort_mini.c\
 			utils.c\
 			sort_big.c
#
OBJS = $(SRCS:.c=.o)
#
.PHONY: all re clean fclean
#
%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $<
#
all: $(NAME)
	@echo "\033[32m\033[40m\033[1m[push_swap compiled]"
#
$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@
#
clean:
	${RM} $(OBJS)
#
fclean: clean
	${RM} $(NAME)
#
re: fclean all

