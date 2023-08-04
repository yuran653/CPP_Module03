/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 04:14:35 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/05 06:24:39 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_class_name = "ClapTrap";
	_name = "";
	_health = 10;
	_energy = 10;
	_attack = 0;
	std::cout << "ClapTrap [" << getName() << "] constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	_class_name = "ClapTrap";
	_name = name;
	_health = 10;
	_energy = 10;
	_attack = 0;
	std::cout << "ClapTrap [" << getName() << "] constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& otherClapTrap) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = otherClapTrap;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap [" << getName() << "] destructor called" << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap& otherClapTrap) {
	std::cout << "ClapTrap overload assignment operator called" << std::endl;
	if (this == &otherClapTrap)
		return *this;
	_class_name = otherClapTrap._class_name;
	_name = otherClapTrap._name;
	_health = otherClapTrap._health;
	_energy = otherClapTrap._energy;
	_attack = otherClapTrap._attack;
	return *this;
}

void	ClapTrap::displayInfo(void) {
	std::cout << getClassName() << " [" << getName() << "] has: health point(s)["
		<< getHealthPoints() << "], energy point(s)[" << getEnergyPoints()
		<< "], attack point(s)[" << getAttackPoints() << "]" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (_health > 0) {
		if (_energy > 0) {
			std::cout << getClassName() << " [" << getName() << "] attacks [" << target << "], causing ["
			<< getAttackPoints() << "] point(s) of damage!" << std::endl;
			_energy--;
		}
		else
			std::cout << getClassName() << " [" << getName() << "] can't attack [" << target
				<< "]!" << std::endl;
	}
	else
		std::cout << getClassName() << " [" << getName() << "] is dead!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_health > 0) {
		if (_health > amount) {
			std::cout << getClassName() << " [" << getName() << "] is damaged by ["
				<< amount << "] point(s)!" << std::endl;
			_health -= amount;
		}
		else {
			_health = 0;
			std::cout << getClassName() << " [" << getName() << "] is damaged by ["
				<< amount << "] point(s) and is dead!" << std::endl;
		}
	}
	else
		std::cout << getClassName() << " [" << getName() << "] is dead!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_health > 0) {
		if (_energy > 0) {
			std::cout << getClassName() << " [" << getName() << "] is repaired by ["
				<< amount << "] point(s)!" << std::endl;
			_health += amount;
			_energy--;
		}
		else
			std::cout << getClassName() << " [" << getName() << "] can't be repaired!" << std::endl;
	}
	else
		std::cout << getClassName() << " [" << getName() << "] is dead!" << std::endl;
}

void	ClapTrap::setClassName(std::string class_name) {
	_class_name = class_name;
}

void	ClapTrap::setName(std::string name) {
	_name = name;
}

void	ClapTrap::setHealthPoints(unsigned int value) {
	_health = value;
}
void	ClapTrap::setEnergyPoints(unsigned int value) {
	_energy = value;
}
void	ClapTrap::setAttackPoints(unsigned int value) {
	_attack = value;
}

std::string		ClapTrap::getClassName(void) {
	return _class_name;
}

std::string	ClapTrap::getName(void) {
	return _name;
}

unsigned int	ClapTrap::getHealthPoints(void) {
	return _health;
}

unsigned int	ClapTrap::getEnergyPoints(void) {
	return _energy;
}

unsigned int	ClapTrap::getAttackPoints(void) {
	return _attack;
}
