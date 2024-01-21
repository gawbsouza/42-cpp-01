/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 08:31:59 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 07:14:29 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
    this->type = type;
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}

const std::string &Weapon::getType()
{
    return type;
}