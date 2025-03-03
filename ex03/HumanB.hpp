/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:37:41 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/17 17:03:25 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Weapon.hpp"

class HumanB {
    private: 
        std::string name;
        Weapon *weapon; 
    public:
        HumanB (std::string name);
        void attack () ;
        void setWeapon(Weapon &Weapon);
        
         
};
