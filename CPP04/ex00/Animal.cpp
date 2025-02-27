/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:01:38 by mtani             #+#    #+#             */
/*   Updated: 2024/08/30 16:58:13 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
	this->type = copy.type;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignment operator called" << std::endl; 
    this->type = copy.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "*Mysterious Animal Sound*" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}