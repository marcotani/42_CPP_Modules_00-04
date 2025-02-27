/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:53:06 by mtani             #+#    #+#             */
/*   Updated: 2024/07/05 17:29:06 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack()
{
    if (this->_weapon->getType().empty())
        std::cout << this->_name << " doesn't have a weapon! Time for some kung fu!" << std::endl;
    else
        std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}