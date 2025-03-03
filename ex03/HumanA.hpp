/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:11:32 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/17 16:33:32 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA (std::string name, Weapon &weapon);
        void attack () ;

};