/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 08:38:08 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 07:11:11 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"
# include <string>

class HumanB
{
private:
    Weapon *weapon;
    std::string name;
    
public:
   HumanB(const std::string &name);
   void setWeapon(Weapon &weapon);
   void attack();
};

#endif