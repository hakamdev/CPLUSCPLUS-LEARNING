# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 21:38:22 by hakamgo           #+#    #+#              #
#    Updated: 2022/02/15 18:09:16 by ehakam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	replace_test
SRCS	=	main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all
