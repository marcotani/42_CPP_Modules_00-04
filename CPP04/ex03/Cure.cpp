/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:40:20 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 00:46:13 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    //std::cout << "Cure default constructor called" << std::endl;
    this->type = "cure";
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
    //std::cout << "Cure copy constructor called" << std::endl;
    this->type = copy.type;
}

Cure &Cure::operator=(const Cure &copy)
{
    //std::cout << "Cure assignation operator called" << std::endl;
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

Cure::~Cure()
{
    //std::cout << "Cure destructor called" << std::endl;
}

Cure* Cure::clone() const
{
    Cure *clone = new Cure(*this);
    return (clone);
}

void Cure::use(ICharacter& target)
{
    std::cout << " heals " << target.getName() << "'s wounds *" << std::endl;
}

std::string const &Cure::getType() const
{
    return (this->type);
}