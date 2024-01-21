/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 08:27:43 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 10:27:16 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::complain(std::string level)
{
    struct levelHandler
    {
        std::string level;
        void (Harl::*handler)(void);
    };

    levelHandler handers[] = {
        {"DEBUG",   &Harl::debug},
        {"INFO",    &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR",   &Harl::error}
    };
    
    for (int i = 0; i < 4; i++) {
        if (handers[i].level.compare(level) == 0) {
            return (this->*handers[i].handler)();
        }
    }
    
    std::cout << "[" << level << "]" << " is an invalid level." << std::endl;
}

void Harl::debug(void)
{
    std::cout << GREY_COLOR;
    std::cout << "[DEBUG]: some debug message.";
    std::cout << RESET_COLOR << std::endl;
}

void Harl::info(void)
{
    std::cout << CYAN_COLOR;
    std::cout << "[INFO]: some information message.";
    std::cout << RESET_COLOR << std::endl;
}

void Harl::warning(void)
{
    std::cout << YELLOW_COLOR;
    std::cout << "[WARNING]: some warning message.";
    std::cout << RESET_COLOR << std::endl;
}

void Harl::error(void)
{
    std::cout << RED_COLOR;
    std::cout << "[ERROR]: some error message.";
    std::cout << RESET_COLOR << std::endl;
}
