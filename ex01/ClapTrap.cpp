/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:14:57 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/28 18:03:28 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : health(10), Energy_points(10), Attack_damage(0), name("Robot") {std::cout << "ClapTrap contsructor called\n";}

ClapTrap::ClapTrap (std::string name1) : name(name1), health(10), Energy_points(10), Attack_damage(0){}
ClapTrap::ClapTrap(const ClapTrap& other) : health(other.health), Energy_points(other.Energy_points), Attack_damage(other.Attack_damage){}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	name = other.name + "1";
	health = other.health;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
	return *this;
}

ClapTrap::~ClapTrap(){std::cout << "ClapTrap destructor called\n";}

void ClapTrap::debug(){
	std::cout << "Name :" << name << std::endl;
	std::cout << "Health :" << health << std::endl;
	std::cout << "Energy_points : " << Energy_points << std::endl;
	std::cout << "Attack_damage : " <<Attack_damage << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (Energy_points > 0){
		std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << Attack_damage << " points of damage !\n";
		Energy_points--;}
	else
		std::cout << "ClapTrap have 0 energy :(";
}

std::string ClapTrap::getname()
{
	return name;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << name << " take " << amount << " points of damage !\n";
	health = health - amount;
}
void ClapTrap::beRepaired(unsigned int amount){
	if (Energy_points > 0){
		std::cout << "ClapTrap " << name << " beRepaired " << amount << " points !\n";
		Energy_points--;
		health += amount;}
	else
		std::cout << "ClapTrap have 0 energy :(";
}