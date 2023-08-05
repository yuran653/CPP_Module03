/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 00:35:53 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/06 05:27:55 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
	setClassName("DiamondTrap");
	setNameClap(ClapTrap::getName());
	setName("");
	setHealthPoints(FragTrap::getHealthPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackPoints(FragTrap::getAttackPoints());
	std::cout << "DiamondTrap [" << getName() << "] constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name) {
	setClassName("DiamondTrap");
	setNameClap(ClapTrap::getName());
	setName(name);
	setHealthPoints(FragTrap::getHealthPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackPoints(FragTrap::getAttackPoints());
	std::cout << "DiamondTrap [" << getName() << "] constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& otherDiamondTrap) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = otherDiamondTrap;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap [" << getName() << "] destructor called" << std::endl;
	ScavTrap::~ScavTrap();
	FragTrap::~FragTrap();
	FragTrap::~FragTrap();

}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& otherDiamondTrap) {
	std::cout << "DiamondTrap overload assignment operator called" << std::endl;
	if (this == &otherDiamondTrap)
		return *this;
	setClassName(const_cast<DiamondTrap&>(otherDiamondTrap).getClassName());
	setName(const_cast<DiamondTrap&>(otherDiamondTrap).getName());
	setHealthPoints(const_cast<DiamondTrap&>(otherDiamondTrap).getHealthPoints());
	setEnergyPoints(const_cast<DiamondTrap&>(otherDiamondTrap).getEnergyPoints());
	setAttackPoints(const_cast<DiamondTrap&>(otherDiamondTrap).getAttackPoints());
	return *this;
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << getClassName() <<" [" << getName()
		<< "] screaming: I'M A DIAMOND INHERITANCE MONSTER OF ["
		<< getNameClap() << "]!" << std::endl;
}

std::string	DiamondTrap::getNameClap() {
	return _name_clap;
}

void	DiamondTrap::setNameClap(std::string name) {
	_name_clap = name;
}
