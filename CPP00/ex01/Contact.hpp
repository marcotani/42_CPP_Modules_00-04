/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:47:56 by mtani             #+#    #+#             */
/*   Updated: 2024/07/31 10:55:54 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    public:
        Contact();
        ~Contact();
        void setContact(int index);
        std::string getContactInfo(std::string info);
		std::string getPhoneNumber(std::string info);
        std::string returnInfo(std::string info);
    private:
        int index;
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
};

#endif