/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:14:46 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/28 16:47:18 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>

class ClapTrap
{
private :
	std::string name;
	int health;
	int Energy_points ;
	int Attack_damage;
public :
	ClapTrap();
	ClapTrap(std::string name1, int health1, int Energy_points1, int Attack_damage1);
	// Copie les data a vers b, un = classic
	ClapTrap(const ClapTrap& other);
	// Partage la memoire entre a et b donc les valeurs, prcq retourne une ref
	ClapTrap &operator=(const ClapTrap& other);
	~ClapTrap();

	// pas de setter/getter dsl la team	:( bon en fait si :)
	std::string getname();
		
	void debug();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif