/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:39:41 by mtani             #+#    #+#             */
/*   Updated: 2024/08/30 23:35:43 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
    Cure();
    Cure(const Cure &copy);
    Cure &operator=(const Cure &copy);
    virtual ~Cure();

    Cure* clone() const;
    void use(ICharacter& target);
    std::string const &getType() const;

    private:
    std::string type;
};

#endif