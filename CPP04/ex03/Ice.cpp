/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:31:06 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 00:46:25 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    //std::cout << "Ice default constructor called" << std::endl;
    this->type = "ice";
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
    //std::cout << "Ice copy constructor called" << std::endl;
    this->type = copy.type;
}

Ice &Ice::operator=(const Ice &copy)
{
    //std::cout << "Ice assignation operator called" << std::endl;
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

Ice::~Ice()
{
    //std::cout << "Ice destructor called" << std::endl;
}

Ice* Ice::clone() const
{
    Ice *clone = new Ice(*this);
    return (clone);
}

void Ice::use(ICharacter& target)
{
    std::cout << " shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

std::string const &Ice::getType() const
{
    return (this->type);
}