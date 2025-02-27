/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:17:02 by mtani             #+#    #+#             */
/*   Updated: 2024/07/05 17:28:55 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    if (this->_weapon.getType().empty())
        std::cout << this->_name << " doesn't have a weapon! Time for some kung fu!" << std::endl;
    else
        std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}