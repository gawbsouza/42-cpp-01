/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 08:33:46 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 07:10:49 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
    
