/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 08:34:35 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 07:05:09 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
private:
    std::string type;
    
public:
    Weapon(const std::string &type);
    void setType(const std::string &type);
    const std::string &getType();
};

#endif