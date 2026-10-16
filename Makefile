NAME = libft.a

SRC = $(wildcard *.c)
OBJS =  $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	cc -Wall -Wextra -Werror -Iincludes -c $< -o $@

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
