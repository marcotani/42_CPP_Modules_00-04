/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:15:26 by mtani             #+#    #+#             */
/*   Updated: 2024/08/19 18:29:14 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &copy);
    ~Dog();
    
    void makeSound() const;
};