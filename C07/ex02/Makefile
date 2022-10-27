# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 09:26:31 by mvieira-          #+#    #+#              #
#    Updated: 2022/10/27 09:47:50 by mvieira-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex02
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