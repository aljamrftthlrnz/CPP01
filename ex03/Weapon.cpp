/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:09:42 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/17 17:05:58 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon (std::string type) {
    this->type = type; 
}

Weapon::~Weapon() {
}

void Weapon::setType(std::string newType)
{
    type = newType;
}

const std::string& Weapon::getType () const {
    return (type); 
}