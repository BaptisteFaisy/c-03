/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:03:37 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/28 18:06:06 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScapTrap constructor called\n";
	health = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScapTrap constructor called\n";
	health = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::~ScavTrap() {std::cout << "ScapTrap destructor called\n";}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	ClapTrap::operator=(other);
	return *this;
}

void ScavTrap::guardGate(){
	std::cout << "mode Gate keeper activate\n";
}

void ScavTrap::attack(const std::string& target){
	if (Energy_points > 0){
		std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << Attack_damage << " points of damage !\n";
		Energy_points--;}
	else
		std::cout << "ScavTrap have 0 energy :(";
}