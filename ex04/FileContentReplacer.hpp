/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileContentReplacer.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:36:48 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 07:28:56 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_CONTENT_REPLACER_H
# define FILE_CONTENT_REPLACER_H

# define FILE_SUFFIX "replace"

#include <string>

class FileContentReplacer
{
private:
    std::string fileName;
    std::string replaceLine(
                             const std::string &line,
                             const std::string &src,
                             const std::string &rpl);
    
public:
    FileContentReplacer(const std::string &fileName);
    bool replace(const std::string &src, const std::string &rpl);
};

#endif