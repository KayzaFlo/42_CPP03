/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:15:47 by fgeslin           #+#    #+#             */
/*   Updated: 2023/05/02 15:42:50 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap    ct("CT");
	ClapTrap	*ctClone;
	ScavTrap    st("ST");
	ScavTrap    sts("ST_sec");
	ScavTrap	*stClone;
	
	std::cout << std::endl;

	ct.attack("Monster");
	ct.takeDamage(3);
	ct.beRepaired(5);
	std::cout << std::endl;

	ctClone = new ClapTrap(ct);
	ctClone->beRepaired(10);
	delete (ctClone);
	std::cout << std::endl;

	sts.attack("Fish");
	sts.takeDamage(3);
	sts.beRepaired(5);
	sts = st;
	sts.attack("Squid");
	sts.takeDamage(3);
	sts.beRepaired(5);
	std::cout << std::endl;

	stClone = new ScavTrap(st);
	stClone->beRepaired(10);
	delete (stClone);
	std::cout << std::endl;

	return 0;
}
