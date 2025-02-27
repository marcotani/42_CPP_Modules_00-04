/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:15:12 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 14:07:24 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    this->brain = new Brain;
}
Dog::Dog(const Dog &copy) : AAnimal("Dog")
{
    std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*(copy.getBrain()));
	this->type = "Dog";
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*(copy.getBrain()));
	this->type = "Dog";

    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Bau Bau Bau!" << std::endl;
}

void Dog::thoughtMaker(std::string brainBlast) const
{
	brain->setIdea(brainBlast, "Dog");
}

void Dog::probeMind() const
{
	brain->getIdeas("Dog");
}

Brain *Dog::getBrain( void ) const
{
	return (brain);
}