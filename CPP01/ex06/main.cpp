/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:45:41 by mtani             #+#    #+#             */
/*   Updated: 2024/07/08 18:50:15 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    std::string input;

    if (argc != 2 || argv[1][0] == '\0')
    {
        std::cout << "Please specify the level of filter" << std::endl;
        return (1);
    }
    input = argv[1];
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    harl.complain(input);
    return (0);
}