/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:15:48 by fgeslin           #+#    #+#             */
/*   Updated: 2023/05/02 15:36:15 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _health(10), _energy(10), _attack(0) {
	std::cout << "ClapTrap " << _name << " Named constructor called!" << std::endl;
}

ClapTrap::ClapTrap( std::string name, int h, int e, int a ) : _name(name), _health(h), _energy(e), _attack(a) {
	std::cout << "ClapTrap " << _name << " Defined constructor called!" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src) {
	*this = src;
	_name = _name + "_copy";
	std::cout << "ClapTrap " << _name << " Copy constructor called!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " Destructor called!" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage" << std::endl;
	_health -= amount;
	std::cout << "ClapTrap " << _name << " health is now at " << _health << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " gains " << amount << " health points" << std::endl;
	_health += amount;
	std::cout << "ClapTrap " << _name << " health is now at " << _health << std::endl;
}

ClapTrap &  ClapTrap::operator=( ClapTrap const & rhs ) {
	_name = rhs._name;
	_health = rhs._health;
	_energy = rhs._energy;
	_attack = rhs._attack;
	return *this;
}
