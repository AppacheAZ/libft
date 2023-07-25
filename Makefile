# Variables
NAME = libft.a
INCLUDE = libft.h
#ar (r se agregan archivs .o a la bibioteca, c se crea la biblioteca, s se actualiza el indice)
LIB = ar rcs
CC = gcc
CFLAGS = -Wall -Werror -Wextra
DIR = ./

FILES = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero \
		ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr \
		ft_strncmp

SOURCES=$(addprefix $(DIR)/, $(addsuffix .c, $(FILES)))
OBJECTS=$(addprefix $(DIR)/, $(addsuffix .o, $(FILES)))

# Regla para el objetivo principal
all:$(NAME)

# Regla para crear los archivos objeto
.c.o: $(SOURCES)
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para el programa principal
$(NAME): $(OBJECTS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJECTS)

# Limpieza
clean:
	rm -f $(NAME) *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
 # comment
