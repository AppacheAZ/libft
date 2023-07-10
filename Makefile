# Variables
NAME=libft.a
INCLUDE=libft.h
#ar (r se agregan archivs .o a la bibioteca, c se crea la biblioteca, s se actualiza el indice)
LIB=ar rcs
CC =gcc
CFLAGS =-Wall -Werror -Wextra
DIR=./

FILES = ft_isalpha ft_isdigit

SOURCES=$(addprefix $(DIR)/, $(addsuffix .c, $(FILES)))
OBJECTS=$(addprefix $(DIR)/, $(addsuffix .o, $(FILES)))

# Regla para el objetivo principal
all:$(NAME)

# Regla para crear los archivos objeto
.c.o: $(SOURCES)
	$(CC) $(CFLAGS) -c $<

# Regla para el programa principal
$(NAME): $(OBJECTS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJECTS)

# Limpieza
clean:
	rm -f libft *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

 # comment
