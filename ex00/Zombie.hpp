/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:12:01 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/16 20:28:29 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie {
    private:
        std::string name;
    public:
        Zombie (std::string name); 
        ~Zombie (); 

        void announce (void) const ;
    
};

Zombie      *newZombie (std::string name);
void        randomChump (std::string name); 

# endif