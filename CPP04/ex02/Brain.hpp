/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:21:46 by mtani             #+#    #+#             */
/*   Updated: 2024/08/30 16:34:07 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    public:
    Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &copy);
    ~Brain();

	void setIdea(std::string brainBlast, std::string type);
	void getIdeas(std::string type) const;

    private:
    std::string *ideas;
};

#endif