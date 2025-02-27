/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:19:31 by mtani             #+#    #+#             */
/*   Updated: 2024/07/31 11:12:42 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    PhoneBook phoneBook;
    std::string cmd = "";
    std::cout << "Phonebook" << std::endl;
    std::cout << "Type ADD to add a contact" << std::endl;
    std::cout << "Type SEARCH to search for a contact" << std::endl;
    std::cout << "Type EXIT to exit the phonebook" << std::endl;
    std::cout << "WARNING: There is a limit of 8 contacts and they will be lost upon exit." << std::endl;
    while (1)
    {
		do 
		{
			std::cout << "Enter a command: ";
        	std::cin >> cmd;
		} while (cmd.empty());
        if (cmd == "ADD")
            phoneBook.addContact();
        else if (cmd == "SEARCH")
            phoneBook.searchContact();
        else if (cmd == "EXIT")
            return (0);
        else
            std::cout << "Invalid command, please refer to instructions" << std::endl;
    }
}