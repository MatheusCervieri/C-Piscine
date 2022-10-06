# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 12:12:48 by mvieira-          #+#    #+#              #
#    Updated: 2022/10/06 12:13:35 by mvieira-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: 		all clean fclean re

NAME 		= 	megaphone

SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)

CC 			=	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98
OCFLAGS		=	-Wall -Wextra -Werror

all:	 		$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OCFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
				@rm -f $(OBJS)

fclean: 		clean
				@rm -f $(NAME)

re: 			fclean all