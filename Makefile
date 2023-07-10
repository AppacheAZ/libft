# Variables
CC =gcc
CFLAGS =-Wall -Werror -Wextra

# Regla para el objetivo principal
all: libft

# Regla para el programa principal
libft: main.o functions.o
	$(CC) $(CFLAGS) -o libft main.o functions.o

# Regla para el archivo objeto main.o
main.o: main.c libft.h
	$(CC) $(CFLAGS) -c main.c

# Regla para el archivo objeto funciones.o
functions.o: functions.c libft.h
	$(CC) $(CFLAGS) -c functions.c

# Limpieza
clean:
	rm -f libft *.o
