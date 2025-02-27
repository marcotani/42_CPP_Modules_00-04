/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:17:27 by mtani             #+#    #+#             */
/*   Updated: 2024/08/17 18:59:38 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);
    ScavTrap &operator=(const ScavTrap &src);
	~ScavTrap();
	
	void attack(std::string const & target);
	void guardGate();
};