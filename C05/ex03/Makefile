NAME		=	ex03
CC			=	c++
INCLUDES	=	includes
CPPFLAGS	=	-g -Wall -Werror -Wextra -std=c++98 
RM			=	rm -rf
SRCS		=	main.cpp \
				Bureaucrat.cpp \
				Form.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp \
				Intern.cpp 


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