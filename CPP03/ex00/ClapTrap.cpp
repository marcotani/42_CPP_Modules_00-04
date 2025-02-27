/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:33:00 by mtani             #+#    #+#             */
/*   Updated: 2024/08/29 17:25:50 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Claptrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Claptrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Claptrap assignation operator called" << std::endl;
	_name = src._name;
	_hitpoints = src._hitpoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	if (_hitpoints <= 0)
	{
		std::cout << "Claptrap " << _name << " is burning in robot hell, he can't hurt anyone now." << std::endl;
		return ;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "Claptrap " << _name << " can't attack, his energy is running dry!" << std::endl;
		return ;
	}
	else
		_energyPoints -= 1;
	std::cout << "Claptrap " << _name << " attacks " << target << " dealing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints <= 0)
	{
		std::cout << "Claptrap " << _name << " is already dead. I understand you believe me, but it's better to funnel your rage into something else." << std::endl;
		return ;
	}
	std::cout << "Claptrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	_hitpoints -= amount;
	if (_hitpoints <= 0)
		std::cout << "Claptrap " << _name << " has gone to robot hell!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitpoints == 10)
	{
		std::cout << "Claptrap " << _name << " is already at full health, genius!" << std::endl;
		return ;
	}
	else if (_hitpoints <= 0)
	{
		std::cout << "Claptrap " << _name << " is done for, you can't repair what's already dead!" << std::endl;
		return ;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "Claptrap " << _name << " can't be repaired, he's all outta juice!" << std::endl;
		return ;
	}
	else
	{
		_energyPoints -= 1;
		_hitpoints += amount;
	}
	std::cout << "Claptrap " << _name << " is repaired for " << amount << " hit points! It'll die another day." << std::endl;
}