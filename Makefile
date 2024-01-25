NAME = libftprintf.a
SRCS = ft_printf.c ft_print_char.c ft_print_string.c ft_print_nbr.c ft_print_hexa.c ft_print_vptr.c ft_hexa.c ft_print_unsigned.c
BSRCS = ft_printf_bonus.c ft_print_char_bonus.c ft_print_string_bonus.c ft_print_nbr_bonus.c ft_print_hexa_bonus.c ft_print_vptr_bonus.c ft_hexa_bonus.c ft_print_unsigned_bonus.c ft_flags_bonus.c
OBJ = $(SRCS:.c=.o)
BOBJ = $(BSRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	ar rcs $(NAME) *.o

%.o: %.c
	$(CC) $(CFLAGS) -g -c $< -o $@

bonus: $(BOBJ)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	ar rcs $(NAME) $(BOBJ)

clean:
	rm -f $(OBJ) $(BOBJ)
	@make -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFT) fclean

re: fclean all

.PHONY: all bonus clean fclean re
