# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 17:55:52 by hakamgo           #+#    #+#              #
#    Updated: 2021/07/29 18:22:14 by hakamgo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	refptr
SRCS	=	main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all