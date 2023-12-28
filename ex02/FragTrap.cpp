/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:17:41 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/28 18:33:53 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "FragTrap constructor called\n";
	name = "FragTrap";
	health = 100;
	Energy_points = 100;
	Attack_damage = 30;}

FragTrap::FragTrap(std::string name1) : ClapTrap(){
	std::cout << "FragTrap constructor called\n";
	name = name1;
	health = 100;
	Energy_points = 100;
	Attack_damage = 30;}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
}

FragTrap& FragTrap::operator=(const FragTrap& other){
	ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap(){std::cout << "FragTrap destructor called\n";}

void FragTrap::highFivesGuys(){std::cout << "FragTrap " << this->name << " would like to high five everyone!" << std::endl;}