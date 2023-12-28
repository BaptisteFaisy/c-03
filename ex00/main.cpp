/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:14:29 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/28 16:52:43 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstdlib>

int main(void)
{
	ClapTrap claptrap;
	ClapTrap cpy;

	cpy = claptrap;
	claptrap.attack(cpy.getname());
	claptrap.takeDamage(8);
	claptrap.beRepaired(10);
	claptrap.debug();
}