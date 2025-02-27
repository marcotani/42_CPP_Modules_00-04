/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:01:32 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 14:09:15 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
	//Abstract class test
	AAnimal* a = new AAnimal();
	
    std::cout << std::endl << "---Basic Test---" << std::endl << std::endl;
    Dog* j = new Dog();
	Cat* i = new Cat();

	j->thoughtMaker("Bone");
	j->makeSound();
	j->probeMind();
	i->thoughtMaker("Fish");
	i->makeSound();
	i->probeMind();

	//Dog* k = new Dog(*j);
	//Cat* l = new Cat(*i);
	Dog* k = new Dog();
	Cat* l = new Cat();
	*k = *j;
	*l = *i;
	delete j;
	delete i;
	
	std::cout << std::endl << "---Deep copy Test---" << std::endl << std::endl;
	k->makeSound();
	k->probeMind();
	l->makeSound();
	l->probeMind();
	delete k;
	delete l;

    std::cout << std::endl << "---Creating housePets Array---" << std::endl << std::endl;

    const AAnimal* zoo[6] = { new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat() };
    
    std::cout << std::endl << "---Deleting housePets Array---" << std::endl << std::endl;

    for (int i = 0; i < 6; i++)
        delete zoo[i];

    return(0);
}