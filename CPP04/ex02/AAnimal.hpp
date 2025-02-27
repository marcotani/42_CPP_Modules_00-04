/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:01:48 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 14:06:33 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>

class AAnimal
{
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal &copy);
        AAnimal &operator=(const AAnimal &copy);
        virtual ~AAnimal();

        virtual void makeSound() const = 0;
        std::string getType() const;
    
    protected:
        std::string type;
};

#endif