# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtani <mtani@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/15 17:46:02 by mtani             #+#    #+#              #
#    Updated: 2024/06/15 19:36:08 by mtani            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Contact.cpp PhoneBook.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Contact.hpp PhoneBook.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
		$(CPP) $(OBJ) -g -o $(NAME)

%.o: %.cpp
		$(CPP) $(FLAGS) -c $< -o $@

clean:
		rm -f $(NAME) $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all