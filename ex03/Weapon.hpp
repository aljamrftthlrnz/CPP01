/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:30:40 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/18 18:43:32 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Weapon {
    private:
        std::string type; 
    public:
        Weapon (std::string type); 
        ~Weapon ();
        const std::string &getType (void) const;
        void    setType (std::string newType) ; 

};

# endif