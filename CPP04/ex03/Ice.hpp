/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:31:13 by mtani             #+#    #+#             */
/*   Updated: 2024/08/30 23:35:56 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
    Ice();
    Ice(const Ice &copy);
    Ice &operator=(const Ice &copy);
    virtual ~Ice();

    Ice* clone() const;
    void use(ICharacter& target);
    std::string const &getType() const;

    private:
    std::string type;
};

#endif