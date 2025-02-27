/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:08:42 by mtani             #+#    #+#             */
/*   Updated: 2024/08/30 23:09:10 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
    MateriaSource();
    MateriaSource(const MateriaSource &copy);
    MateriaSource &operator=(const MateriaSource &copy);
    virtual ~MateriaSource();

    void learnMateria(AMateria* materia);
    AMateria* createMateria(std::string const & type);

    private:
    AMateria *materias[4];
};

#endif