/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:15:12 by mtani             #+#    #+#             */
/*   Updated: 2024/08/19 18:50:47 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog &copy) : Animal(copy)
{
    *this = copy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignment constructor called" << std::endl;
    if (this == &copy)
        return (*this);
    *this = copy;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Bau Bau Bau!" << std::endl;
}

