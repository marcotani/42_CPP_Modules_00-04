/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:48:33 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 00:57:51 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    //std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : name(name)
{
    //std::cout << "A new character named " << name << " has been successfully created! Welcome!" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materia[i] = 0;
    for (int i = 0; i < 10; i++)
        this->floor[i] = 0;
}

Character::Character(const Character &copy) : name(copy.getName())
{
    //std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materia[i] = copy.materia[i];
}

Character &Character::operator=(const Character &copy)
{
    //std::cout << "Character assignation operator called" << std::endl;
    if (this == &copy)
        return (*this);
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i])
            delete this->materia[i];
        this->materia[i] = copy.materia[i]->clone();
    }
    return (*this);
}

Character::~Character()
{
    //std::cout << name << " was destroyed!" << std::endl;
    if (this->materia[0] == 0)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i])
            delete this->materia[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (this->floor[i])
            delete this->floor[i];
    }
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] == 0)
        {
            this->materia[i] = m;
            //std::cout << name << " equipped materia " << m->getType() << " in slot " << i << std::endl;
            return ;
        }
    }
    //std::cout << "Inventory full! Materia could not be equipped." << std::endl;
}

void Character::unequip(int i)
{
    if (i < 0 || i > 3 || this->materia[i] == 0)
    {
        //std::cout << "Invalid slot or no materia in slot." << std::endl;
        return ;
    }
    //std::cout << name << " unequipped materia " << this->materia[i]->getType() << " from slot " << i << std::endl;
    int j = 0;
    while (j < 10)
    {
        if (this->floor[j] == 0)
        {
            this->floor[j] = this->materia[i];
            break ;
        }
        j++;
    }
    if (j == 10)
    {
        std::cout << "Floor is full! Materia could not be unequipped." << std::endl;
        return ;
    }
    this->materia[i] = 0;
}

void Character::use(int i, ICharacter& target)
{
    if (i < 0 || i > 3 || !this->materia[i])
    {
        std::cout << "* " << name << " can't do anything, there's no Materia in that slot! *" << std::endl;
        return ;
    }
    std::cout << "* " << name;
    ((this->materia)[i])->use(target);
}