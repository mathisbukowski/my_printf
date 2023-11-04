##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile for printf
##

SRC = src/my_printf.c \
		src/d_i_s_c_o_flags.c \
		src/x_u_f_flags.c \
		src/n_p_modulo_flags.c \
		src/my_put_nbr.c \
		src/my_putchar.c \
		src/my_putstr.c \
		src/my_revstr.c \
		src/my_strlowcase.c \
		src/my_strlen.c \
		src/flag_e.c \
		src/flag_e_maj.c \
		src/my_put_nbr_f_flag.c \
		src/flag_g.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

CRITERION = --coverage -lcriterion

TEST_FILE = unit_tests

all: $(NAME)

$(NAME): $(OBJ)
	    ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

tests_run: clean
			 gcc -o $(TEST_FILE) $(SRC) tests/test_my_printf.c -L./ -lmy $(CRITERION)
			./$(TEST_FILE) --verbose --full-stats

gcovr_branches:
			gcovr --exclude tests/ --branches
