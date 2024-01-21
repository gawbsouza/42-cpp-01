/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 08:25:16 by gasouza           #+#    #+#             */
/*   Updated: 2024/01/21 10:29:30 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# define RESET_COLOR     "\033[39m"
# define GREY_COLOR      "\033[90m"
# define RED_COLOR       "\033[91m"
# define YELLOW_COLOR    "\033[93m"
# define CYAN_COLOR      "\033[96m"

# include <string>

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
public:
    void complain(std::string level);
};

#endif