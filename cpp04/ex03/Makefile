# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caboudar <caboudar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 16:43:10 by caboudar          #+#    #+#              #
#    Updated: 2023/08/05 15:39:06 by caboudar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp			\
				AMateria.cpp		\
				Ice.cpp				\
				Cure.cpp			\
				Character.cpp		\
				MateriaSource.cpp	\

OBJS		=	$(SRCS:%.cpp=%.o)

CC			=	c++

RM			=	rm -f

CFLAGS		= 	-Wall -Wextra -Werror -g3 -I./
#CFLAGS		= 	-I./

CPPFLAGS	= 	-std=c++98

NAME		= 	ex03

%.o: %.cpp
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME)	

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re bonus