/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:37:38 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/17 17:05:07 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"



HumanB::HumanB(std::string name) : name(name), weapon(NULL) {

}

void HumanB::setWeapon (Weapon &weapon)
{
    this->weapon = &weapon; 
}

void HumanB::attack()
{
    if(weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else 
        std::cout << name << " has no weapon " << std::endl;
        
}