/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:10:28 by mtani             #+#    #+#             */
/*   Updated: 2024/08/19 19:14:19 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    WrongCat();
    WrongCat(const WrongCat &copy);
    WrongCat &operator=(const WrongCat &copy);
    ~WrongCat();
    
    void makeSound() const;
};