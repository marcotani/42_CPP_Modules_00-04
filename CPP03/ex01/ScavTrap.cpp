/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:17:31 by mtani             #+#    #+#             */
/*   Updated: 2024/08/29 17:07:05 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Scavtrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Scavtrap constructor called" << std::endl;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Scavtrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "Scavtrap assignation operator called" << std::endl;
	_name = src._name;
	_hitpoints = src._hitpoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap destructor called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	if (_hitpoints <= 0)
	{
		std::cout << "Scavtrap " << _name << " is done for, he can't attack anymore!." << std::endl;
		return ;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "Scavtrap " << _name << " can't attack, he's all outta juice!" << std::endl;
		return ;
	}
	else
		_energyPoints -= 1;
	std::cout << "Scavtrap " << _name << " tries its best and attacks " << target << ", inflicting " << _attackDamage << " points of damage! Ouch!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (_hitpoints <= 0)
	{
		std::cout << "Scavtrap " << _name << " is kaput, he can't guard the gate anymore." << std::endl;
		return ;
	}
	std::cout << "Scavtrap " << _name << " is standing guard, no one is allowed through the gate!" << std::endl;
}
