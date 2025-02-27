/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:15:26 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 14:07:31 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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