NAME = test
FLAGS = -Wall -Werror -Wextra 
SRCS = main.c srcs/ft_printf.c srcs/ft_putstr.c srcs/ft_flags.c srcs/ft_strrchr.c 
OBJ = $(SRCS:%.c=%.o)
RM = rm -rf

.c.o:
	@gcc -c $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	@gcc $(FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

flagoff: $(OBJ)
	@gcc $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all