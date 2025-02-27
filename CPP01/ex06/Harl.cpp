/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:45:49 by mtani             #+#    #+#             */
/*   Updated: 2024/07/08 19:05:45 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
    int i = 0;
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    while (levels[i] != level && i < 4)
        i++;
    if (i == 4)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return;
    }
    switch (i)
    {
        case 0:
            (this->debug());
        case 1:
            (this->info());
        case 2:
            (this->warning());
        case 3:
            (this->error());
            break;
        default:
            break;
    }
}

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
    return;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
    return;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
    return;
}

void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
    return;
}

