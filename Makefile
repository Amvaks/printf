NAME = libftprintf.a

LIST = ft_strlen.c\
 ft_printf.c\
 ft_printf_char.c\
 ft_printf_string.c\
 ft_printf_pointer.c\
 ft_printf_decimal_numb.c\
 ft_printf_unsign_int.c\
 ft_printf_hexadecimal_low.c\
 ft_printf_hexadecimal_up.c\
 ft_len_number.c

OBJ = $(patsubst %.c, %.o, $(LIST))

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?
	
%.o : %.c ft_printf.h
	gcc $(FLAGS) -c $< -o $@

clean : 
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean
