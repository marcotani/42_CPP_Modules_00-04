/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:47:45 by mtani             #+#    #+#             */
/*   Updated: 2024/06/15 22:21:59 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

# include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact();
        void searchContact();
    private:
        Contact contacts[8];
        int contactCount;
        int index;
};

#endif