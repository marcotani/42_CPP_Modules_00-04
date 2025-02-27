/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:01:48 by mtani             #+#    #+#             */
/*   Updated: 2024/08/19 18:57:24 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();

        virtual void makeSound() const;
        std::string getType() const;
    
    protected:
        std::string type;
};

#endif