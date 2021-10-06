# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 19:37:13 by hbourgeo          #+#    #+#              #
#    Updated: 2021/10/04 21:25:14 by hbourgeo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 
CFLAGS = -Wall -Werror -Wextra 
LDFLAGS = 
NAME = libft.a

SRC = 	ft_isalpha.c	\
		ft_isalnum.c	\
		ft_isdigit.c	\
		ft_isascii.c	\
		ft_isprint.c 	\
		ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c

OBJ = $(SRC:.c=.o)

HEADER = libft

all : $(NAME)

$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) 

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean : 
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)	

re : fclean all

.PHONY: clean fclean all re

