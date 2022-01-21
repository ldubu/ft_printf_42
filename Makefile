NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra 
SRCS = 	srcs/ft_printf.c \
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
		srcs/ft_strcpy.c \
		srcs/ft_strncmp.c \
		srcs/ft_sign.c \
		srcs/ft_pre.c

SRCSB = srcs_bonus/ft_printf_bonus.c \
		srcs_bonus/ft_putstr_bonus.c \
		srcs_bonus/ft_flags_bonus.c \
		srcs_bonus/ft_strrchr_bonus.c \
		srcs_bonus/ft_toupper_bonus.c \
		srcs_bonus/ft_unsi_itoa_bonus.c \
		srcs_bonus/ft_address_bonus.c \
		srcs_bonus/ft_c_to_str_bonus.c \
		srcs_bonus/ft_hexa_bonus.c \
		srcs_bonus/ft_itoa_bonus.c \
		srcs_bonus/ft_strlen_bonus.c \
		srcs_bonus/ft_strjoin_bonus.c \
		srcs_bonus/ft_putargs_bonus.c \
		srcs_bonus/ft_ini_struct_bonus.c \
		srcs_bonus/ft_write_args_bonus.c \
		srcs_bonus/ft_strcpy_bonus.c \
		srcs_bonus/ft_strncmp_bonus.c \
		srcs_bonus/ft_sign_bonus.c \
		srcs_bonus/ft_pre_bonus.c


OBJ = $(SRCS:%.c=%.o)

OBJB = $(SRCSB:%.c=%.o)

RM = rm -rf

.c.o: includes/ft_printf.h ft_includes/ft_struct.h
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}
			
$(NAME): 	$(OBJ)
	ar rc $(NAME) $(OBJ)

all: 		$(NAME)

bonus: $(OBJB)
	ar rc $(NAME) $(OBJB)

clean:
	$(RM) $(OBJ) $(OBJB)

fclean:		clean
	$(RM) $(NAME)

re: 		fclean all

.PHONY: 	clean fclean all re 