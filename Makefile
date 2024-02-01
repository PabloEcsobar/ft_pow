NAME = libft_pow.a
SRC = ft_pow.c tools.c approximation.c
OBJDIR = objs
OBJ = $(SRC:%.c=$(OBJDIR)/%.o)
CC = gcc
CFLAGSO = -Wall -Wextra -Werror -c

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJDIR)/%.o: %.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGSO) $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
