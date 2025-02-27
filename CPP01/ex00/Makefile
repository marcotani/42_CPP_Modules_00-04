# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtani <mtani@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/03 17:43:14 by mtani             #+#    #+#              #
#    Updated: 2024/07/03 22:02:32 by mtani            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

SRC = main.cpp \
		Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = Zombie.hpp

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
