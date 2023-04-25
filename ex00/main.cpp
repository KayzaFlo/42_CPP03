/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:15:47 by fgeslin           #+#    #+#             */
/*   Updated: 2023/04/25 15:50:52 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap    ct("CT");
	ClapTrap	*ctClone;

	ct.attack("Monster");
	ct.takeDamage(3);
	ct.beRepaired(5);

	ctClone = new ClapTrap(ct);
	ctClone->beRepaired(10);
	delete (ctClone);

	return 0;
}
