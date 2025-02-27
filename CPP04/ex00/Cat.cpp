/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:29:53 by mtani             #+#    #+#             */
/*   Updated: 2024/08/19 19:11:59 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    *this = copy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignment constructor called" << std::endl;
    if (this == &copy)
        return (*this);
    *this = copy;
    return (*this);
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaaaaaao!" << std::endl;
}
