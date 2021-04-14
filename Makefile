# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 10:33:22 by ekelkel           #+#    #+#              #
#    Updated: 2019/12/30 16:50:51 by ekelkel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Werror -Wall -Wextra
CLEANUP = /bin/rm -rf
INC = libft.h
INC_DIR = inc/
OBJ_DIR = obj/

vpath %.c src/libft
vpath %.c src/get_next_line
vpath %.h inc/

SRC += ft_strlen.c
SRC += ft_strcpy.c
SRC += ft_strncpy.c
SRC += ft_strdup.c
SRC += ft_strcat.c
SRC += ft_strncat.c
SRC += ft_strstr.c
SRC += ft_strnstr.c
SRC += ft_strcmp.c
SRC += ft_strncmp.c
SRC += ft_strchr.c
SRC += ft_strrchr.c
SRC += ft_atoi.c
SRC += ft_atol.c
SRC += ft_memset.c
SRC += ft_memcpy.c
SRC += ft_memccpy.c
SRC += ft_memmove.c
SRC += ft_memchr.c
SRC += ft_memcmp.c
SRC += ft_bzero.c
SRC += ft_isalpha.c
SRC += ft_isdigit.c
SRC += ft_isalnum.c
SRC += ft_isascii.c
SRC += ft_isprint.c
SRC += ft_toupper.c
SRC += ft_tolower.c
SRC += ft_memalloc.c
SRC += ft_memdel.c
SRC += ft_strnew.c
SRC += ft_strdel.c
SRC += ft_strclr.c
SRC += ft_striter.c
SRC += ft_striteri.c
SRC += ft_strmap.c
SRC += ft_strmapi.c
SRC += ft_strequ.c
SRC += ft_strnequ.c
SRC += ft_strsub.c
SRC += ft_strjoin.c
SRC += ft_strtrim.c
SRC += ft_strsplit.c
SRC += ft_itoa.c
SRC += ft_putchar.c
SRC += ft_putstr.c
SRC += ft_putendl.c
SRC += ft_putnbr.c
SRC += ft_putchar_fd.c
SRC += ft_putstr_fd.c
SRC += ft_putendl_fd.c
SRC += ft_putnbr_fd.c
SRC += ft_strlcat.c
SRC += ft_lstnew.c
SRC += ft_lstdelone.c
SRC += ft_lstdel.c
SRC += ft_lstadd.c
SRC += ft_lstiter.c
SRC += ft_lstappend.c
SRC += ft_lstsize.c
SRC += ft_lstreverse.c
SRC += ft_lstsorted.c
SRC += ft_lstmap.c
SRC += ft_strupcase.c
SRC += ft_strlowcase.c
SRC += ft_strrev.c
SRC += ft_printlst.c
SRC += ft_lstlen.c
SRC += ft_nblenbase.c
SRC += ft_itoabase.c
SRC += get_next_line.c

OBJ = $(patsubst %.c, $(OBJ_DIR)%.o, $(SRC))

all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJ)
	ar -rsc $@ $^
	printf "\33[2K\r$(GREEN)✓ Successfully created : $@\n$(NC)"

$(OBJ): $(OBJ_DIR)%.o : %.c $(INC)
	$(CC) -c $(CFLAGS) -I$(INC_DIR) $< -o $@
	printf "\33[2K\r$(WHITE)Compiling : $<$(NC)"

$(OBJ_DIR):
	mkdir -p $@

clean:
	$(CLEANUP) $(OBJ)
	$(CLEANUP) $(OBJ_DIR)

fclean: clean
	$(CLEANUP) $(NAME)

re: fclean all

GREEN=\033[32m
RED=\033[0;31m
WHITE=\033[0;37m
NC=\033[0m

.PHONY: all clean fclean re
.SILENT:
