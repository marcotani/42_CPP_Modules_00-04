/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:04:13 by mtani             #+#    #+#             */
/*   Updated: 2024/07/03 19:27:18 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombies = zombieHorde(5, "Zombie");

    for (int i = 0; i < 5; i++)
    {
        zombies[i].announce();
    }
    delete [] zombies;
    return 0;
}