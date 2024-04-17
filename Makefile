##
## EPITECH PROJECT, 2024
## Workshop_Unit_Tests
## File description:
## Makefile
##

NAME	=	my_str_to_word_array

TESTS_NAME	=	unit_tests

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-W -Wall -Wextra -Werror -I./includes

TESTS_FLAGS	=	-W -Wall -Wextra -Werror -I./includes --coverage -lcriterion

SRC_MAIN	=	src/src_main/main.c

SRC	=	$(shell find src/ -name '*.c' -not -name 'main.c')

TESTS_SRC	=	$(shell find tests/ -name '*.c')

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_MAIN)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(CFLAGS)

clean:
	$(RM) $(OBJ) $(OBJ_MAIN)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

tests_run:
	$(CC) -o $(TESTS_NAME) $(SRC) $(TESTS_SRC) $(TESTS_FLAGS)
	./$(TESTS_NAME) --verbose
	gcovr -e tests/ -b
	make tests_clean

tests_clean:
	$(RM) *.gcda *.gcno

tests_fclean:	tests_clean
	$(RM) $(TESTS_NAME)

tests_re:	tests_clean tests_run

.PHONY:	all clean fclean re tests_run tests_clean tests_fclean tests_re
