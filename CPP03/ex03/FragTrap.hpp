/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:46:28 by mtani             #+#    #+#             */
/*   Updated: 2024/08/17 18:59:27 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &copy);
    FragTrap &operator=(const FragTrap &src);
    ~FragTrap();
    
    void highFivesGuys(void);
};