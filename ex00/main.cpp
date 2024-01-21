/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:41:05 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 06:43:25 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include <string>

void randomChump(std::string name);
Zombie *newZombie(std::string name);

int main()
{
    Zombie zombie("Direct Zombie");
    zombie.announce();
    
    Zombie *funcZombie = newZombie("Function Zombie");
    funcZombie->announce();
    delete funcZombie;
    
    randomChump("Random Zombie");
    
    return 0;
}