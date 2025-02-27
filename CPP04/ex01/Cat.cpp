/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:29:53 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 02:12:13 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    this->brain = new Brain;
}
Cat::Cat(const Cat &copy) : Animal("Cat")
{
    std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*(copy.getBrain()));
	this->type = "Cat";
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*(copy.getBrain()));
	this->type = "Cat";

    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Miaaaaaao!" << std::endl;
}

void Cat::thoughtMaker(std::string brainBlast) const
{
	brain->setIdea(brainBlast, "Cat");
}

void Cat::probeMind() const
{
	brain->getIdeas("Cat");
}

Brain *Cat::getBrain( void ) const
{
	return (brain);
}