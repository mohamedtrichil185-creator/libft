NAME = libft.a

SRC = ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_split.c \
      ft_strchr.c \
      ft_strdup.c \
      ft_striteri.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_strtrim.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_atoi.c \
      ft_calloc.c \
      ft_strmapi.c \
      ft_memset.c \
      ft_itoa.c \
      ft_strjoin.c \
      ft_substr.c \
      ft_putendl_fd.c \
      ft_bzero.c \
      ft_lstclear.c \
      ft_lstlast.c \
      ft_lstnew.c \
      ft_lstsize.c \
      ft_lstadd_back.c \
      ft_lstadd_front.c \
      ft_putnbr_fd.c \
      ft_lstdelone.c \
      ft_lstmap.c \
      ft_lstiter.c \

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	cc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean
