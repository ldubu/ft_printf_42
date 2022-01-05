NAME = test
FLAGS = -Wall -Werror -Wextra 
SRCS = 	main.c \
		srcs/ft_printf.c \
		srcs/ft_putstr.c \
		srcs/ft_flags.c \
		srcs/ft_strrchr.c \
		srcs/ft_toupper.c \
		srcs/ft_unsi_itoa.c \
		srcs/ft_address.c \
		srcs/ft_c_to_str.c \
		srcs/ft_hexa.c \
		srcs/ft_itoa.c \
		srcs/ft_strlen.c \
		srcs/ft_strjoin.c
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