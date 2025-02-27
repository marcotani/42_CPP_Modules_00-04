/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:35:13 by mtani             #+#    #+#             */
/*   Updated: 2024/07/08 17:05:33 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>

class MySed
{
    public:
        MySed(std::string filename, std::string s1, std::string s2);
        ~MySed();
        void replace();
    private:
        std::string _in;
        std::string _s1;
        std::string _s2;
};

#endif