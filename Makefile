TARGET = libft.a
PROGRAM_NAME = prog

CC = cc
AR = ar -rcs

FILES = main.c ft_bzero.c

CFLAGS = -Wall -Wextra -Werror
OBJS = $(FILES:.c=.o)

all: $(TARGET)

$(TARGET) : $(OBJS)
	$(AR) $(TARGET) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(PROGRAM_NAME)

$(OBJS) : $(FILES)
	# $< Récupère chaque fichier sources
	# $^ Dépose chaque fichier objets
	$(CC) $(CFLAGS) -c $< $^

clean:
	rm -rf $(OBJS) 

fclean : clean
	rm -rf $(TARGET)

go : all
	./$(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re go