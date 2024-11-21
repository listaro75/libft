NAME = libft.a
PROGRAM_NAME = prog

CC = cc
AR = ar -rcs

FILES = main.c ft_bzero.c ft_atoi.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c\
ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strnstr.c\
ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c

CFLAGS = -Wall -Wextra -Werror
OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(PROGRAM_NAME)

$(OBJS) : $(FILES)
	# $< Récupère chaque fichier sources
	# $^ Dépose chaque fichier objets
	$(CC) $(CFLAGS) -c $< $^

clean:
	rm -rf $(OBJS) 

fclean : clean
	rm -rf $(NAME)

go : all
	./$(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re go