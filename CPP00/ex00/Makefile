# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtani <mtani@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/15 17:19:51 by mtani             #+#    #+#              #
#    Updated: 2024/06/15 17:23:12 by mtani            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = megaphone

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

all: $(name)

$(name):
	$(CPP) $(FLAGS) $(SRC) -o $(name)

clean:
	rm -f $(name)

fclean: clean

re: fclean all