/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileContentReplacer.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:40:14 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 08:11:44 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileContentReplacer.hpp"
#include <fstream>
#include <iostream>

FileContentReplacer::FileContentReplacer(const std::string &fileName)
{
    this->fileName = fileName;
}

std::string FileContentReplacer::replaceLine(
                                              const std::string &line,
                                              const std::string &src,
                                              const std::string &rpl)
{
    std::string buffer;
    size_t posFind = 0;
    size_t startSearchAt = 0;

    if (src.size() == 0 || src.compare(rpl) == 0) {
        return line;
    }
    
    while(true)
    {
        posFind = line.find(src, startSearchAt);
        if (posFind == (size_t)-1 ){
            buffer += line.substr(startSearchAt, line.size() - startSearchAt);
            break;
        }
        buffer += line.substr(startSearchAt, posFind - startSearchAt) + rpl;
        startSearchAt = posFind + src.size();
    }
    
    return buffer;
}

bool FileContentReplacer::replace(const std::string &src, const std::string &rpl)
{
    std::string newFileName = fileName + "." + FILE_SUFFIX;
    std::ifstream fin;
    std::ofstream fout;
    
    fin.open(fileName.c_str(), std::ifstream::in);
    if (!fin.good()) {
        std::cout 
            << "Error when opening input file (" << fileName << ")." 
            << std::endl;
        return false;
    }

    fout.open(newFileName.c_str(), std::ifstream::out);
    if (!fout.good()) {
        fin.close();
        std::cout 
            << "Error when opening output file (" << newFileName << ")." 
            << std::endl;
        return false;
    }

    std::string lineReaded;
    while (getline(fin, lineReaded))
    {
        if (!fin.eof()){
            lineReaded += "\n";
        }
        fout << replaceLine(lineReaded, src, rpl);
    }

    fin.close();
    fout.close();
    return true;
}