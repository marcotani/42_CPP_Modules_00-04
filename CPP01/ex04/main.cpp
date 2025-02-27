/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:41:21 by mtani             #+#    #+#             */
/*   Updated: 2024/07/08 17:29:36 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Not enough arguments: specify a filename, followed by the string you want to replace, followed by the string you want to replace it with." << std::endl;
		return 1;
	}
	if (std::string(argv[2]).empty() || std::string(argv[3]).empty())
	{
		std::cout << "Error: strings cannot be empty" << std::endl;
		return 1;
	}
	MySed s(argv[1], argv[2], argv[3]);
	s.replace();
	return 0;
}