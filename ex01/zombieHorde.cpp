/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:53:01 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 06:53:44 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;

    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    
    return zombies;
}