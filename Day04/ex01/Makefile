# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 05:29:40 by ehakam            #+#    #+#              #
#    Updated: 2022/02/13 23:48:21 by ehakam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	poly_test
SRCS	=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all