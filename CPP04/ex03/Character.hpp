/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:44:54 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 00:29:36 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
    Character();
    Character(std::string name);
    Character(const Character &copy);
    Character &operator=(const Character &copy);
    ~Character();
    
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int i);
    void use(int i, ICharacter& target);

    private:
    const std::string name;
    AMateria *materia[4];
    AMateria *floor[10];
};

#endif