FILES = ft_isalpha.c ft_isalnum.c ft_tolower.c ft_strlen.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_toupper.c \
		ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c

NAME = libft.a

CC = cc

OBJ = $(FILES:.c=.o)
OBJ_BONUS = $(BONUS_FILES:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJ)
	ar -rsc $(NAME) $(OBJ)

$(OBJ) : $(FILES)
	$(CC) $(CFLAGS) -c $< $^
	
$(OBJ_BONUS) : $(BONUS_FILES)
	$(CC) $(CFLAGS) -c $< $^
	
clean: 
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all
