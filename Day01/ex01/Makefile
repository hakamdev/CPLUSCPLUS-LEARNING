# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 15:19:09 by hakamgo           #+#    #+#              #
#    Updated: 2021/07/29 15:19:37 by hakamgo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	zombie_test
SRCS	=	Zombie.cpp ZombieHorde.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all