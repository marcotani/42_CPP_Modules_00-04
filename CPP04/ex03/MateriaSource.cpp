/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:09:19 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 00:04:11 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
    //std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materias[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    //std::cout << "MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i])
            this->materias[i] = copy.materias[i]->clone();
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    //std::cout << "MateriaSource assignation operator called" << std::endl;
    if (this == &copy)
        return (*this);
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i])
            delete this->materias[i];
        this->materias[i] = copy.materias[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    //std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i])
            delete this->materias[i];
    }
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] == 0)
        {
            this->materias[i] = materia;
            //std::cout << "Materia learned: " << materia->getType() << std::endl;
            return ;
        }
    }
    //std::cout << "Inventory full! Materia could not be learned." << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] != 0 && this->materias[i]->getType() == type)
        {
            //std::cout << "Materia created: " << type << std::endl;
            return (this->materias[i]->clone());
        }
    }
    //std::cout << "Materia not found" << std::endl;
    return (0);
}