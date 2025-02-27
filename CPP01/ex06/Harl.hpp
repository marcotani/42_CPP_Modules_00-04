/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:45:44 by mtani             #+#    #+#             */
/*   Updated: 2024/07/08 18:24:25 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <algorithm>

class Harl
{
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
    private:
        void debug();
        void error();
        void warning();
        void info();
};

#endif