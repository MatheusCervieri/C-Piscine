# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 16:02:50 by mvieira-          #+#    #+#              #
#    Updated: 2022/10/26 16:02:55 by mvieira-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex01
CC			=	c++
INCLUDES	=	includes
CPPFLAGS	=	-g -Wall -Werror -Wextra -std=c++98 
RM			=	rm -rf
SRCS		=	main.cpp \

OBJS		=	$(SRCS:%.cpp=%.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
			@$(CC) $(CPPFLAGS) -c $< -o $(<:.cpp=.o)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		fclean, all, re