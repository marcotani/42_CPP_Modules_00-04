/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:33:02 by mtani             #+#    #+#             */
/*   Updated: 2024/08/17 18:25:46 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("Scav");

	scav.attack("target");
	scav.takeDamage(10);
	scav.beRepaired(5);
	scav.guardGate();
	return (0);
}