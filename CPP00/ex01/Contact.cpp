/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:45:35 by mtani             #+#    #+#             */
/*   Updated: 2024/07/31 11:15:14 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::returnInfo(std::string info)
{
    if (info == "First Name")
        return this->firstName;
    else if (info == "Last Name")
        return this->lastName;
    else if (info == "Nickname")
        return this->nickName;
    else if (info == "Phone Number")
        return this->phoneNumber;
    else if (info == "Darkest Secret")
        return this->darkestSecret;
    return "Invalid info";
}
std::string Contact::getPhoneNumber(std::string info)
{
    std::string input;
    bool empty = false;
    do
    {
        std::cout << "Enter " << info << ": ";
        std::cin >> input;
        if (input.empty())
        {
            std::cout << "Invalid input, please try again." << std::endl;
            empty = true;
        }
        else if (input.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout << "Invalid input, please only use numbers." << std::endl;
			empty = true;
		}
		else
            empty = false;
    } while (empty == true);
    return input;
}


std::string Contact::getContactInfo(std::string info)
{
    std::string input;
    bool empty = false;
    do
    {
        std::cout << "Enter " << info << ": ";
        std::cin >> input;
        if (input.empty())
        {
            std::cout << "Invalid input, please try again." << std::endl;
            empty = true;
        }
        else
            empty = false;
    } while (empty == true);
    return input;
}

void Contact::setContact(int index)
{
    this->index = index;
    this->firstName = getContactInfo("First Name");
    this->lastName = getContactInfo("Last Name");
    this->nickName = getContactInfo("Nickname");
    this->phoneNumber = getPhoneNumber("Phone Number");
    this->darkestSecret = getContactInfo("your Darkest Secret");
    std::cout << "Contact added successfully!" << std::endl;
}