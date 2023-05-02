/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:15:49 by fgeslin           #+#    #+#             */
/*   Updated: 2023/05/02 15:30:42 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    int         _health;
    int         _energy;
    int         _attack;

public:
    ClapTrap( std::string name );
    ClapTrap( std::string name, int h, int e, int a );
    ClapTrap( ClapTrap const & src);
    ~ClapTrap();

    ClapTrap &  operator=( ClapTrap const & rhs );

    void        attack(const std::string& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);

};

#endif
