/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:12:07 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/19 11:16:29 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl () {
    
}

Harl::~Harl () {
    
}

void Harl::debug () {
    std::cout << "You want a problem diagnosis? Well, it's sitting right in front of me" << std::endl;
}

void Harl::info () {
        std::cout << "Why do I always have to be the one to give away information" << std::endl;
}

void Harl::warning () {
        std::cout << "Warning! You do not know how to handle me. lol" << std::endl;
}

void Harl::error () {
        std::cout << "Isn't a surprise that you generated an error..." << std::endl;
}

void Harl::complain (std::string level)
{
    int lev = 0;
    
    void (Harl::*funcPtr)() = NULL;
    if (level == "DEBUG") lev = 1;
    if (level == "INFO") lev = 2;
    if (level == "WARNING") lev = 3;
    if (level == "ERROR") lev = 4;

    switch (lev)
    {
        std::cout << "here"<< std::endl;
        case 1: 
            funcPtr = &Harl::debug;
            break ;
        case 2:
            funcPtr = &Harl::info;
            break ;
        case 3:
            funcPtr = &Harl::warning;
            break ;
        case 4:
            funcPtr = &Harl::error;
            break ; 
        return ;
    }
    (this->*funcPtr)();  
}
