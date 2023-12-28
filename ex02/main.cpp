/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:14:29 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/28 18:33:26 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>

int main(void)
{
	FragTrap FragTrap("Jean");

	FragTrap.debug();
	FragTrap.beRepaired(10);
	FragTrap.debug();
	FragTrap.attack("David");
	FragTrap.highFivesGuys();
}