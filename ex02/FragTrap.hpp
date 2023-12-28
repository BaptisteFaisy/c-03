/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:17:26 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/28 18:27:16 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public :
	FragTrap();
	FragTrap(std::string name1);

	FragTrap(const FragTrap& other);
	FragTrap &operator=(const FragTrap& other);
	~FragTrap();

	void highFivesGuys();
};

#endif