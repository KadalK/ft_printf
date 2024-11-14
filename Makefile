SRC =	printf_utils.c \
		ft_printf.c

OBJ = $(SRC:%.c=$(OBJ_D)%.o)

HEADER = ft_printf.h

CC = cc

HEADER_D = .

NAME = libftprintf.a

OBJ_D = obj/

CFLAGS = -Wall -Wextra -Werror

$(OBJ_D)%.o:	%.c $(HEADER) | $(OBJ_D)
		$(CC) $(CFLAGS) -I$(HEAD_D) -c $< -o $@

all:	$(NAME)

$(NAME): $(OBJ) Makefile
		ar rcs $@ $^

$(OBJ_D):
		@mkdir -p $(OBJ_D)

clean:
		@rm -rf $(OBJ) $(OBJ_D)
		@echo "C'est tout prop' !"

fclean:
		@rm -rf $(OBJ) $(OBJ_D)
		@rm -rf $(NAME)
		@echo "C'est tout prop' mais mieux !!"

re: fclean all

.PHONY: all clean fclean re