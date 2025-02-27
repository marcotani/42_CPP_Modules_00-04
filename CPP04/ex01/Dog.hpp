/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:15:26 by mtani             #+#    #+#             */
/*   Updated: 2024/08/30 16:37:12 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
    Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &copy);
    ~Dog();
    
    void makeSound() const;
	void thoughtMaker(std::string brainBlast) const;
	void probeMind() const;
	Brain *getBrain() const;

    private:
    Brain *brain;
};