# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 15:12:11 by mwingrov          #+#    #+#              #
#    Updated: 2017/09/21 17:45:09 by mwingrov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell.a

SRC1 = ft_cd.c ft_echo.c ft_execute.c ft_exit.c ft_help.c \
	   ft_launch.c get_next_line.c read_line.c main.c \

SRC = $(SRC1)

OBJ = $(SRC:.c=.o)

LINK = -L Libft/libft -lft

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	make -C Libft/libft
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
