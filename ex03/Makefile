# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 15:30:04 by amirfatt          #+#    #+#              #
#    Updated: 2024/09/18 18:43:07 by amirfatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJECT = $(SOURCE:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJECT)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECT)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	rm -f $(OBJECT)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re