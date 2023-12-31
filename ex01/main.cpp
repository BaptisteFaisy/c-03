/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:14:29 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/28 18:34:39 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <cstdlib>

int main(void)
{
	ScavTrap scavtrap("David");

	scavtrap.debug();
	scavtrap.beRepaired(10);
	scavtrap.debug();
	scavtrap.attack("Homer");
}