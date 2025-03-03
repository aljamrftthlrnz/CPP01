/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:11:34 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/19 11:17:49 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

// When? Dynamic Dispatch - when i want to choose which member function to call
// at runtime


int main()
{
    Harl harl;
    std::string level; 
    
    std::cout << "Enter Level of Complaint ... " << std::endl; 
    while(true && std::cin)
    {
        std::cin >> level;
        if(level != "DEBUG" && level != "ERROR" && level != "INFO" && level != "WARNING")
        {
            std::cout << "Program exited - entered input not valid" << std::endl; 
            return (0);
        }
        harl.complain(level);
        std::cout << "Enter Level of Complaint ... " << std::endl; 
    }
    return 0; 
}