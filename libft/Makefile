NAME = libft.a
PROGRAM = program

SRC = $(filter-out main.c, $(wildcard *.c))
OBJS =  $(SRC:.c=.o)

MAIN = main.c
MAIN_OBJS = $(MAIN:.c=.o)

all : $(NAME) $(PROGRAM)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(PROGRAM): $(MAIN_OBJS) $(NAME)
	$(CC) $(CFLAGS) $(MAIN_OBJS) -L. -lft -o $(PROGRAM)

%.o : %.c
	cc -Wall -Wextra -Werror -Iincludes -c $< -o $@
clean : 
	rm -f $(OBJS) $(MAIN_OBJS)
fclean : clean
	rm -f $(NAME) $(PROGRAM)
re : fclean all

.PHONY : all clean fclean re
