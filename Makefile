NAME = test
FLAGS = -Wall -Werror -Wextra 
SRCS = main.c srcs/ft_printf.c srcs/ft_putchar.c
OBJ = $(SRCS:%.c=%.o)
RM = rm -rf

.c.o:
	@gcc ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	@gcc $(FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all