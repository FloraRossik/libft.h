SRC = ft_isdigit.c ft_isalpha.c ft_isalnum.c\
     ft_atoi.c ft_calloc.c ft_bzero.c ft_isascii.c\
      ft_isprint.c ft_lstadd_back.c ft_lstadd_front.c\
      ft_itoa.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c\
      ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c\
      ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
      ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c\
      ft_putnbr_fd.c ft_putstr_fd.c ft_strcat.c\
      ft_strchr.c ft_strcpy.c ft_strdup.c ft_strjoin.c ft_strlcpy.c\
      ft_strlcat.c ft_strlen.c ft_strmapi.c ft_strncat.c\
      ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strstr.c\
      ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c\
	  ft_strlcpy.c ft_strcat.c ft_split.c\
	


OBJ = ${SRC:%.c=%.o}

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $<

bonus : all

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

so:
	$(CC) -fPIC -c $(FLAGS) $(SRC)
	gcc -shared -o libft.so *.o

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f libft.so
	rm -f libft.a

re : fclean all

.PHONY: all re clean fclean 