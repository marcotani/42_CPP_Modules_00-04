/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:20:02 by mtani             #+#    #+#             */
/*   Updated: 2024/06/15 17:23:30 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {
    int i = 1;
    int j = 0;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else {
        while (av[i])
        {
            while (av[i][j])
            {
                std::cout << (char)toupper(av[i][j]);
                j++;
            }
            j = 0;
            if (i < ac - 1)
                std::cout << " ";
            i++;
        }
    }
    std::cout << std::endl;
    return (0);
}