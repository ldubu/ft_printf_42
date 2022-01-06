NAME = libftprintf.a
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
		srcs/ft_strjoin.c \
		srcs/ft_putargs.c \
		srcs/ft_ini_struct.c \
		srcs/ft_write_args.c \
		srcs/ft_strcpy.c
OBJ = $(SRCS:%.c=%.o)
RM = rm -rf

.c.o:
			@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
			
$(NAME): 	$(OBJ)
			@ar rc $(NAME) $(OBJ)

all: 		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re: 		fclean all

.PHONY: 	clean fclean