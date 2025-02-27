/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:01:32 by mtani             #+#    #+#             */
/*   Updated: 2024/08/30 18:14:40 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << std::endl << "---Testing Animals---" << std::endl << std::endl;
    
    const Animal* base = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    base->makeSound();

    delete base;
    delete j;
    delete i;

    std::cout << std::endl << "---Testing Wrong Animals---" << std::endl << std::endl;

    const WrongAnimal *i2 = new WrongCat();
	const WrongCat *j2 = new WrongCat();
	const WrongAnimal *base2 = new WrongAnimal();

    std::cout << i2->getType() << " " << std::endl;
	std::cout << j2->getType() << " " << std::endl;
    std::cout << base2->getType() << " " << std::endl;

    i2->makeSound();
	j2->makeSound();
	base2->makeSound();

    delete i2;
	delete j2;
	delete base2;

    return(0);
}