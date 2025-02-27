/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:54:14 by mtani             #+#    #+#             */
/*   Updated: 2024/08/29 17:20:12 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    _name = name;
    _hitpoints = FragTrap::_hitpoints;
    _energyPoints = 50;
    _attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    _name = copy._name;
    ClapTrap::_name = this->_name + "_clap_name";
    _hitpoints = copy._hitpoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	if (_hitpoints <= 0)
	{
		std::cout << "Claptrap " << _name << " is kaput, he can't know who he is anymore." << std::endl;
		return ;
	}
    std::cout << "Who am I? WHO AM I?! I AM THE ONE WHO KNOCKS!" << std::endl << "Uh, sorry about that. I'm " << this->_name << " and my ClapTrap is " << ClapTrap::_name << ". Pleased to meet you!" << std::endl;
}