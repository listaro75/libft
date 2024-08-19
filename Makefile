# Variables
CC = gcc                  # Le compilateur
CFLAGS = -Wall -Wextra -Werror -g  # Options de compilation (warnings et debug)
NAME = programme          # Nom de l'exécutable
SRCS = programme.c util.c  # Fichiers source
OBJS = $(SRCS:.c=.o)      # Les fichiers objets correspondants

# Règle principale : compile l'exécutable
all: $(NAME)

# Règle pour créer l'exécutable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Règle pour compiler les fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoie les fichiers objets (.o)
clean:
	rm -f $(OBJS)

# Nettoie les fichiers objets et l'exécutable
fclean: clean
	rm -f $(NAME)

# Recompile tout à partir de zéro
re: fclean all

