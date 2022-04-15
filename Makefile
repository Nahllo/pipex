# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 11:46:22 by jchauvet          #+#    #+#              #
#    Updated: 2022/04/14 12:11:12 by jchauvet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

SRCS = main.c utils_1.c utils_2.c pathfinder.c ft_split.c

FLAGS = -Wall -Werror -Wextra -fsanitize=address

OBJS = $(SRCS:.c=.o)

CC = gcc

HEADER = pipex.h

.PHONY: all re fclean clean

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)

re: fclean all
