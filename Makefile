NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

# Regla para compilar los archivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	

# Regla para compilar la librería libft
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "\033[32m\nLibft Compiled! ᕦ(\033[31m♥\033[32m_\033[31m♥\033[32m)ᕤ\n"

# Regla para compilar todos los archivos
all: $(NAME)

# Regla para limpiar archivos objeto
clean:
	rm -f $(OBJS)

# Regla para limpiar archivos objeto y ejecutables
fclean: clean
	rm -f $(NAME)

# Regla para recompilar todo
re: fclean all

# Regla para compilar los bonus
BONUS_SRCS = $(wildcard *_bonus.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
BONUS_NAME = $(NAME)_bonus

bonus: $(BONUS_OBJS)
	ar rcs $(BONUS_NAME) $(BONUS_OBJS)

# Regla para limpiar archivos objeto y ejecutables de los bonus
clean_bonus:
	rm -f $(BONUS_OBJS) $(BONUS_NAME)

# Regla para agregar al comando fclean
fclean: clean clean_bonus

# Especifica palabras clave que no son archivos.
.PHONY: all clean fclean re bonus clean_bonus