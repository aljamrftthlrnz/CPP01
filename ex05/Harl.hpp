/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:12:04 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/18 18:44:34 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <iomanip>
# include <string>

class Harl 
{
    private:
            void debug ( void ) ;
            void info ( void ) ;
            void warning ( void ) ;
            void error ( void ) ;
    
    public:
            Harl ();
            ~Harl ();
            void complain (std::string level);
};

// Syntax for declaring a pointer to a member function:
// return_type (ClassName::*pointer_name)(parameter_types); 