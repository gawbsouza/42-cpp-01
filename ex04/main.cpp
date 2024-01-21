/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:41:05 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 07:41:53 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileContentReplacer.hpp"
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        std::cout << "usage: <filename> <search term> <replace term>" << std::endl;
        return 0;
    }
    
    std::string fileName = argv[1];
    std::string searchTerm = argv[2];
    std::string replaceTerm = argv[3];
    
    FileContentReplacer fcp(fileName);
    
    if (!fcp.replace(searchTerm, replaceTerm)) {
        std::cout << "The file content could not be replaced." << std::endl;
        return 1;
    }
    
    std::cout << "File content replaced!" << std::endl;
    return 0;
}
