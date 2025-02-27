/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:09:12 by mtani             #+#    #+#             */
/*   Updated: 2024/10/29 16:40:03 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
		{
			Weapon club = Weapon("crude spiked club");

			HumanA bob("Bob", club);
			bob.attack();
			club.setType("some other type of club");
			bob.attack();
		}
		{
			Weapon club = Weapon("crude spiked club");

			HumanB jim("Jim");
			jim.setWeapon(club);
			jim.attack();
			club.setType("some other type of club");
			jim.attack();
		}
		
	// std::string	wepType;
	// std::cout << "> Enter weapon type for Bob: ";
	// std::getline(std::cin >> std::ws, wepType);
	// Weapon wep1 = Weapon(wepType);
	// HumanA bob("Bob", wep1);
	
	// std::cout << "> Enter weapon type for Jim: ";
	// std::getline(std::cin >> std::ws, wepType);
	// Weapon wep2 = Weapon(wepType);
	// HumanB jim("Jim");
	// jim.setWeapon(wep2);
	// bob.attack();
	// jim.attack();
	
	// std::cout << "> In the clash, Bob takes Jim's weapon!" << std::endl;
	// wep1.setType(wep2.getType());
	// wep2.setType("");
	// bob.attack();
	// jim.attack();
    return 0;
}
