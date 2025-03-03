/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:15:14 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/16 20:26:09 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *heapZombie = newZombie("Heap Zombie");
    heapZombie->announce(); 

    randomChump("Stack Zombie");

    delete heapZombie;

    return 0; 
}