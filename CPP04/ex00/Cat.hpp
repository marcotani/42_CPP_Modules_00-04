/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:29:36 by mtani             #+#    #+#             */
/*   Updated: 2024/08/19 18:54:13 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
    public:
    Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &copy);
    ~Cat();
    
    void makeSound() const;
};