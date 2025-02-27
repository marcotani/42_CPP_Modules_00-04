/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:29:36 by mtani             #+#    #+#             */
/*   Updated: 2024/08/30 16:55:42 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
    Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &copy);
    ~Cat();
    
    void makeSound() const;
	void thoughtMaker(std::string brainBlast) const;
	void probeMind() const;
	Brain *getBrain() const;

    private:
    Brain *brain;
};