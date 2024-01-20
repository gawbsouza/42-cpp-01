/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 08:31:59 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/18 07:21:57 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) {
    this->type = type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}

const std::string & Weapon::getType() {
    return type;
}