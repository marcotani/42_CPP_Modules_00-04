/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:29:36 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 14:07:20 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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