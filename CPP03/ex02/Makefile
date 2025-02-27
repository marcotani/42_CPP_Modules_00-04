# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtani <mtani@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 14:33:04 by mtani             #+#    #+#              #
#    Updated: 2024/08/17 18:46:06 by mtani            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap

SRC = main.cpp \
        ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
		c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all