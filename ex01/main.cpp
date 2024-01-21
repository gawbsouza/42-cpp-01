/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:41:05 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 06:56:49 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie *zombieHorde(int N, std::string name);

int main()
{
    int hordeSize = 7;
    Zombie *horde = zombieHorde(hordeSize, "Gabriel");

    for (int i = 0; i < hordeSize; i++)
        horde[i].announce();

    delete []horde;
    
    return 0;
}