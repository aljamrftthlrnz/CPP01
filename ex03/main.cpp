/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:37:56 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/17 17:08:35 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");

        HumanA xenia ("Xenia", club);
        xenia.attack();
        club.setType("some other type of club");
        xenia.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanB persephone ("Persephone");
        persephone.setWeapon(club);
        persephone.attack(); 
        club.setType("some other type of club"); 
        persephone.attack();
    }
    return 0;
}