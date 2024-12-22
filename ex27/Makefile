# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 17:33:23 by mayoucha          #+#    #+#              #
#    Updated: 2024/11/10 20:12:06 by mayoucha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

OBJ = ft_display_file.o

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRC)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
