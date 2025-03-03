/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:32:36 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/16 21:38:39 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 6;
    std::string name = "Zombie";

    Zombie *horde = zombieHorde(N, name);
    for (int i = 0; i < N; ++i)
        horde[i].announce(); 
    delete [] horde;
    return 0;    
}