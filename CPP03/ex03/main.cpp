/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:33:02 by mtani             #+#    #+#             */
/*   Updated: 2024/08/29 17:22:08 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("Diamond");

	for (int i = 0; i < 51; i++)
		diamond.attack("target");
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();
	for (int i = 0; i < 11; i++)
		diamond.takeDamage(10);
	diamond.beRepaired(5);
	return (0);
}