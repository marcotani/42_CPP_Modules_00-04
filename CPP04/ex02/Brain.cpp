/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:21:40 by mtani             #+#    #+#             */
/*   Updated: 2024/08/30 17:08:34 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
	this->ideas = new std::string[100];
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = copy.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
	delete [] (this->ideas);
}

void Brain::setIdea(std::string brainBlast, std::string type)
{
	std::cout << type <<"'s brain is getting full of thoughts about " << brainBlast << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (this->ideas[i].empty())
		{
			this->ideas[i] = brainBlast;
		}
	}
}

void Brain::getIdeas(std::string type) const
{
	std::cout << "Here's what's in " << type << "'s brain: " << std::endl;
	if (ideas[0].empty())
	{
		std::cout << "No ideas yet!" << std::endl;
		return ;
	}
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Idea " << i << ": " << ideas[i] << std::endl;
	}
}