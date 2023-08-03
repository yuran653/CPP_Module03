/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:54:33 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/04 01:02:42 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	private:
		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_attack;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& otherClapTrap);
		~ClapTrap();

		ClapTrap& operator=(const ClapTrap& otherClapTrap);

		void			displayPoints(void);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void);
		unsigned int	getHealthPoints(void);
		unsigned int	getEnergyPoints(void);
		unsigned int	getAttackPoints(void);
};

#endif
