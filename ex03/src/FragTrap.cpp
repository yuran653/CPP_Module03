/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 00:35:30 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/06 04:57:34 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	setClassName("FragTrap");
	setName("");
	setHealthPoints(100);
	setEnergyPoints(100);
	setAttackPoints(30);
	std::cout << "FragTrap [" << getName() << "] constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	setClassName("FragTrap");
	setName(name);
	setHealthPoints(100);
	setEnergyPoints(100);
	setAttackPoints(30);
	std::cout << "FragTrap [" << getName() << "] constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap& otherFragTrap) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = otherFragTrap;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap [" << getName() << "] destructor called" << std::endl;
	ClapTrap::~ClapTrap();
}

FragTrap& FragTrap::operator=(const FragTrap& otherFragTrap) {
	std::cout << "FragTrap overload assignment operator called" << std::endl;
	if (this == &otherFragTrap)
		return *this;
	setClassName(const_cast<FragTrap&>(otherFragTrap).getClassName());
	setName(const_cast<FragTrap&>(otherFragTrap).getName());
	setHealthPoints(const_cast<FragTrap&>(otherFragTrap).getHealthPoints());
	setEnergyPoints(const_cast<FragTrap&>(otherFragTrap).getEnergyPoints());
	setAttackPoints(const_cast<FragTrap&>(otherFragTrap).getAttackPoints());
	return *this;
}

void	FragTrap::attack(const std::string& target) {
	if (getHealthPoints() > 0) {
		if (getEnergyPoints() > 0) {
			std::cout << "FragTrap [" << getName() << "] attacks [" << target << "], causing ["
			<< getAttackPoints() << "] point(s) of damage!" << std::endl;
			setEnergyPoints(getEnergyPoints() - 1);
		}
		else
			std::cout << "FragTrap [" << getName() << "] can't attack [" << target
				<< "]!" << std::endl;
	}
	else
		std::cout << "FragTrap [" << getName() << "] is dead!" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout << getClassName() <<" [" << getName() << "] is giving high five now!" << std::endl;
}
