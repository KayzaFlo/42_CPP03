/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:15:48 by fgeslin           #+#    #+#             */
/*   Updated: 2023/05/02 15:45:40 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name, 100, 50, 20 ) {
	std::cout << "  ScavTrap " << ClapTrap::_name << " Named constructor called!" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src) : ClapTrap( src ) {
	std::cout << "  ScavTrap " << ClapTrap::_name << " Copy constructor called!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "  ScavTrap " << ClapTrap::_name << " Destructor called!" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	std::cout << "  ScavTrap " << ClapTrap::_name << " attacks " << target << ", causing " << ClapTrap::_attack << " points of damage" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _name << " started Gate keeper mode" << std::endl;
}

// ScavTrap &  ScavTrap::operator=( ScavTrap const & rhs ) {
// 	_name = rhs._name;
// 	_health = rhs._health;
// 	_energy = rhs._energy;
// 	_attack = rhs._attack;
// 	return *this;
// }
