# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 10:11:12 by amirfatt          #+#    #+#              #
#    Updated: 2024/09/17 10:16:38 by amirfatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main 

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
		

