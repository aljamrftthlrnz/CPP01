# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 17:34:22 by amirfatt          #+#    #+#              #
#    Updated: 2024/09/17 17:36:16 by amirfatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = file

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = main.cpp

OBJECT = $(SOURCE:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
		$(CC) $(FLAGS) -o $(NAME) $(OBJECT)

%.o : %.cpp
		$(CC) $(FLAGS) -c $< -o $@

clean : 
		rm -f $(NAME)

fclean : clean
		rm -f $(OBJECT)

re : fclean all

.PHONY : all fclean clean re
		