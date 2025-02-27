/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:46:25 by mtani             #+#    #+#             */
/*   Updated: 2024/08/29 17:06:39 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Fragtrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Fragtrap constructor called" << std::endl;
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "Fragtrap copy constructor called" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "Fragtrap assignation operator called" << std::endl;
    _name = src._name;
    _hitpoints = src._hitpoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (_hitpoints <= 0)
	{
		std::cout << "Fragtrap " << _name << " is kaput, there are no more high fives to be had." << std::endl;
		return ;
	}
    std::cout << "Fragtrap " << _name << " wants a high five! HEEELL YEAH BROTHER! *clap*" << std::endl;
}