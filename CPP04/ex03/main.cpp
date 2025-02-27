/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:41:07 by mtani             #+#    #+#             */
/*   Updated: 2024/08/31 00:58:24 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    std::cout << std::endl << "-----Basic tests-----" << std::endl << std::endl;

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;

    std::cout << std::endl << "-----More tests-----" << std::endl << std::endl;

    IMateriaSource* fount = new MateriaSource();
    fount->learnMateria(new Ice());
    fount->learnMateria(new Cure());

    ICharacter* protag = new Character("Cloud");
    ICharacter* support = new Character("Aerith");
    ICharacter* villain = new Character("Sephiroth");

    AMateria* protagM;
    protagM = fount->createMateria("ice");
    std::string type = protagM->getType();
    std::cout << "Materia type in first slot: " << type << std::endl;
    protag->equip(protagM);
    protagM = fount->createMateria("cure");
    type = protagM->getType();
    std::cout << "Materia type in second slot: " << type << std::endl << std::endl;
    protag->equip(protagM);

    AMateria* supportM;
    supportM = fount->createMateria("cure");
    support->equip(supportM);

    AMateria* villainM;
    villainM = fount->createMateria("ice");
    villain->equip(villainM);
    villainM = fount->createMateria("cure");
    villain->equip(villainM);

    protag->use(0, *villain);
    villain->use(0, *protag);
    support->use(0, *protag);
    protag->use(0, *villain);
    villain->use(0, *support);

    protag->unequip(1);
    protag->use(1, *support);
    std::cout << std::endl;

    delete protag;
    delete support;
    delete villain;
    delete fount;

    return 0;
}