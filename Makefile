#make file
CC = cc								# Compiler et options de compilation
CFLAGS = -Wall -Wextra -Werror -g
TARGET = test						# Nom de l'exécutable
SRCS = main.c ft_strlen.c ft_strcpy.c ft_strcmp.c ft_strcat.c ft_atoi.c  ft_isalpha.c ft_putchar.c	ft_putstr.c ft_putendl.c ft_isdigit.c ft_isalnum.c ft_toupper.c ft_tolower.c ft_strdup.c ft_strchr.c  ft_putnbr.c ft_putchar_fd.c ft_isascii.c ft_isprint.c ft_strncat.c# Fichiers sources

# Fichiers objets
OBJS = $(SRCS:.c=.o)

# Règle par défaut pour construire le programme
all: $(TARGET)

# Compilation de l'exécutable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Règle pour nettoyer les fichiers objets et l'exécutable
clean:
	rm -f $(OBJS) $(TARGET)

# Règle pour tout reconstruire
re: clean all
