/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:55:07 by mtani             #+#    #+#             */
/*   Updated: 2024/08/30 23:26:39 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &copy);
        AMateria &operator=(const AMateria &copy);
        virtual ~AMateria();

        std::string const &getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
    protected:
        std::string type;
};

#endif