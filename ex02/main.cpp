/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:41:05 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 07:01:06 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string myString = "HI THIS IS BRAIN";

    std::string *stringPTR = &myString;
    std::string &stringREF = myString;

    std::cout << std::endl;

    std::cout << "The memory address of the string variable: " << &myString  << std::endl;
    std::cout << "The memory address held by stringPTR:      " << &stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:      " << &stringREF << std::endl;
    
    std::cout << std::endl;

    std::cout << "The value of the string variable:  " << myString   << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF  << std::endl; 
    
    std::cout << std::endl;

    return 0;
}