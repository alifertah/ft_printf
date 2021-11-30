NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEADER = ./includes/ft_printf.h

SRC_DIR = src

OBJ_DIR = obj

SRC = ft_tohex.c \
	ft_putchar_fd.c \
	ft_unsigned.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_printf.c \
	ft_ptr.c \

OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))	

all : $(NAME) 

$(NAME) : $(OBJ) $(HEADER)
		ar cr $(NAME) $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p obj
	$(CC) $(CFLAGS) -o $@ -c $<
		
clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

