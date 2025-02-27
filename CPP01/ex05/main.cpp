/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:45:41 by mtani             #+#    #+#             */
/*   Updated: 2024/07/08 18:26:54 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string level;
    Harl harl;
    do
    {
        std::cout << "Enter the level of your complaint (DEBUG, INFO, WARNING, ERROR) or EXIT to close the program: ";
        std::getline(std::cin, level);
        transform(level.begin(), level.end(), level.begin(), ::toupper);
        harl.complain(level);
    } while (level != "EXIT");
}