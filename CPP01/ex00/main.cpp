/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:04:13 by mtani             #+#    #+#             */
/*   Updated: 2024/08/05 15:19:40 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <limits>

int main()
{
    std::string name;

    std::cout << "> Enter a name for your zombie on the stack: ";
    std::cin >> name;
    Zombie zombie1 = Zombie();
    zombie1.nameZombie(name);
    zombie1.announce();
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "> Enter a name for your zombie on the heap: ";
    std::cin >> name;
    Zombie *zombie2 = newZombie(name);
    zombie2->announce();
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "> " << name << " was a good zombie, but now he must go. Deleting " << name << "..." << std::endl;
    delete zombie2;

    std::cout << "> Enter a name for your randomChump(): ";
    std::cin >> name;
    randomChump(name);

    std::cout << "> The program is now over. Closing down..." << std::endl;

    return 0;
}