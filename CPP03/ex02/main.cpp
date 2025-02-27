/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:33:02 by mtani             #+#    #+#             */
/*   Updated: 2024/08/17 18:50:30 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap frag("Frag");

	frag.attack("target");
	frag.takeDamage(10);
	frag.beRepaired(5);
	frag.highFivesGuys();
	return (0);
}