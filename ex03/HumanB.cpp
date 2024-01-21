/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 08:11:57 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 07:12:22 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name)
{
    this->name = name;
    this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack() 
{
    std::string weaponType = "(fist)";
    
    if (weapon != NULL)
        weaponType = weapon->getType();

    std::cout << name << " attacks with their " << weaponType << std::endl;
}