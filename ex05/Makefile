# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 20:42:57 by gasouza           #+#    #+#              #
#    Updated: 2024/01/21 10:13:20 by gasouza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= harl
SRCS		= main.cpp Harl.cpp
OBJS		= $(SRCS:.cpp=.o)

COMPILER 	= c++ -c
LINKER		= c++
CFLAGS		= -Wall -Werror -Wextra -std=c++98 -g
CLEANUP		= rm -rf


all: $(NAME)

$(NAME): $(OBJS)
	$(LINKER) $^ -o $@

%.o : %.cpp
	$(COMPILER) $< $(CFLAGS) -o $@ 

clean:
	$(CLEANUP) $(OBJS)
	$(CLEANUP) *.gch

fclean: clean
	$(CLEANUP) $(NAME)

re: fclean all

.PHONY: all clean fclean re