/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 08:35:09 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/18 08:26:47 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

# include "Weapon.hpp"
# include <string>

class HumanA
{
private:
    Weapon *weapon;
    std::string name;
public:
    HumanA(const std::string &name, Weapon &weapon);
    void attack();
};

#endif