/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:13:17 by mtani             #+#    #+#             */
/*   Updated: 2024/07/03 19:44:13 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void announce();
        void nameZombie(std::string name);

    private:
        std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif