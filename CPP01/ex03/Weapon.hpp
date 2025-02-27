/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:01:28 by mtani             #+#    #+#             */
/*   Updated: 2024/07/03 21:06:48 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string const &getType();
        void setType(std::string type);
    private:
        std::string _type;
};

#endif