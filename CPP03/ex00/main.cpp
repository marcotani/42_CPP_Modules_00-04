/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:33:02 by mtani             #+#    #+#             */
/*   Updated: 2024/08/05 16:15:59 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("Junker");

	claptrap.attack("fly");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap.beRepaired(5);
	claptrap.takeDamage(10);
	claptrap.attack("fly");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	return 0;
}