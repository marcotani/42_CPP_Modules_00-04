/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:56:38 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 00:04:45 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    //std::cout << "AMateria default constructor called" << std::endl;
    this->type = "default";
}

AMateria::AMateria(std::string const & type) : type(type)
{
    //std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
    //std::cout << "AMateria copy constructor called" << std::endl;
    this->type = copy.type;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    //std::cout << "AMateria assignation operator called" << std::endl;
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

AMateria::~AMateria()
{
    //std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    //std::cout << "AMateria used on " << target.getName() << " *" << std::endl;
}
