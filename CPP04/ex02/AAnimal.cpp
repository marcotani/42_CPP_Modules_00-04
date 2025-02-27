/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:01:38 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 14:07:02 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
    this->type = type;
    std::cout << "AAnimal type constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
	this->type = copy.type;
}

AAnimal &AAnimal::operator=(const AAnimal &copy)
{
    std::cout << "AAnimal assignment operator called" << std::endl; 
    this->type = copy.type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << "*Mysterious AAnimal Sound*" << std::endl;
}

std::string AAnimal::getType() const
{
    return (type);
}