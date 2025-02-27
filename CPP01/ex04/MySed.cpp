/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:01:14 by mtani             #+#    #+#             */
/*   Updated: 2024/07/08 17:38:39 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

MySed::MySed(std::string filename, std::string s1, std::string s2)
{
    this->_in = filename;
    this->_s1 = s1;
    this->_s2 = s2;
}

MySed::~MySed()
{
}

void    MySed::replace()
{
    std::ifstream   ifs(this->_in.c_str());
    if (!ifs.is_open() || ifs.bad())
    {
        std::cout << "Error: could not open file: " << this->_in << std::endl;
        return ;
    }
    std::string     out = this->_in + ".replace";
    std::ofstream   ofs(out.c_str());
    if (!ofs.is_open() || ofs.bad())
    {
        std::cout << "Error: could not create file: " << out << std::endl;
        return ;
    }
    std::string     line;
    while (std::getline(ifs, line))
    {
        size_t  i = 0;
        while ((i = line.find(this->_s1, i)) != std::string::npos)
        {
            line.erase(i, this->_s1.length());
            line.insert(i, this->_s2);
            i += this->_s2.length();
        }
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
    std::cout << "Replacement was successful!" << std::endl;
}