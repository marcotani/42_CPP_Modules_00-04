/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:51:24 by mtani             #+#    #+#             */
/*   Updated: 2024/07/05 17:29:08 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon& _weapon);
    private:
        std::string _name;
        Weapon* _weapon;
};

#endif