/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:32:56 by mtani             #+#    #+#             */
/*   Updated: 2024/08/17 18:37:23 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
    ClapTrap &operator=(const ClapTrap &src);
	~ClapTrap();
	
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	private:
	std::string _name;
	unsigned int _hitpoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
};