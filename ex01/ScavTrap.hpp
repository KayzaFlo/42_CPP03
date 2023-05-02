/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:15:49 by fgeslin           #+#    #+#             */
/*   Updated: 2023/05/02 15:46:00 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap( std::string name );
    ScavTrap( ScavTrap const & src);
    ~ScavTrap();

    // ScavTrap &  operator=( ScavTrap const & rhs );

    void        attack(const std::string& target);
    void        guardGate(void);

};

#endif
