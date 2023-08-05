/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 22:02:52 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/05 22:25:06 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	setClassName("ScavTrap");
	setName("");
	setHealthPoints(100);
	setEnergyPoints(50);
	setAttackPoints(20);
	std::cout << "ScavTrap [" << getName() << "] constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(){
	setClassName("ScavTrap");
	setName(name);
	setHealthPoints(100);
	setEnergyPoints(50);
	setAttackPoints(20);
	std::cout << "ScavTrap [" << getName() << "] constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& otherScavTrap) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = otherScavTrap;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap [" << getName() << "] destructor called" << std::endl;
	ClapTrap::~ClapTrap();
}

ScavTrap& ScavTrap::operator=(const ScavTrap& otherScavTrap) {
	std::cout << "ScavTrap overload assignment operator called" << std::endl;
	if (this == &otherScavTrap)
		return *this;
	setClassName(const_cast<ScavTrap&>(otherScavTrap).getClassName());
	setName(const_cast<ScavTrap&>(otherScavTrap).getName());
	setHealthPoints(const_cast<ScavTrap&>(otherScavTrap).getHealthPoints());
	setEnergyPoints(const_cast<ScavTrap&>(otherScavTrap).getEnergyPoints());
	setAttackPoints(const_cast<ScavTrap&>(otherScavTrap).getAttackPoints());
	return *this;
}

void	ScavTrap::guardGate() {
	std::cout << getClassName() <<" [" << getName() << "] is gurding gate now!" << std::endl;
}
