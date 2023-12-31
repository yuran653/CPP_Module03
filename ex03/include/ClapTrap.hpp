/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 00:32:53 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/06 02:21:19 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	private:
		std::string		_class_name;
		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_attack;

	protected:
		void			setClassName(std::string class_name);
		void			setName(std::string name);

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& otherClapTrap);
		virtual ~ClapTrap();

		ClapTrap& operator=(const ClapTrap& otherClapTrap);

		void			displayInfo(void);
		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getClassName(void);
		std::string		getName(void);
		unsigned int	getHealthPoints(void);
		unsigned int	getEnergyPoints(void);
		unsigned int	getAttackPoints(void);
		void			setHealthPoints(unsigned int value);
		void			setEnergyPoints(unsigned int value);
		void			setAttackPoints(unsigned int value);
};

#endif
