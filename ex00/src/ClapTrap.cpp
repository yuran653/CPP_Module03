/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:54:55 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/04 01:08:33 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_name = "";
	_health = 10;
	_energy = 10;
	_attack = 0;
	std::cout << "ClapTrap [" << getName() << "] constructor called" << std::endl;
	displayPoints();
}

ClapTrap::ClapTrap(std::string name) {
	_name = name;
	_health = 10;
	_energy = 10;
	_attack = 0;
	std::cout << "ClapTrap [" << getName() << "] constructor called" << std::endl;
	displayPoints();
}

ClapTrap::ClapTrap(ClapTrap& otherClapTrap) {
	std::cout << "Copy constructor called" << std::endl;
	*this = otherClapTrap;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap& otherClapTrap) {
	std::cout << "Overload assignment operator called" << std::endl;
	if (this == &otherClapTrap)
		return *this;
	_name = otherClapTrap._name;
	_health = otherClapTrap._health;
	_energy = otherClapTrap._energy;
	_attack = otherClapTrap._attack;
	return *this;
}

void	ClapTrap::displayPoints(void) {
	std::cout << "ClapTrap [" << getName() << "] has: [" << getHealthPoints()
		<< "] health point(s), [" << getEnergyPoints() << "] energy point(s), ["
		<< getAttackPoints() << "] attack point(s)" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (_health > 0) {
		if (_energy > 0) {
			std::cout << "ClapTrap [" << getName() << "] attacks [" << target << "], causing ["
			<< getAttackPoints() << "] point(s) of damage!" << std::endl;
			_energy--;
		}
		else
			std::cout << "ClapTrap [" << getName() << "] can't attack [" << target
				<< "]!" << std::endl;
	}
	else
		std::cout << "ClapTrap [" << getName() << "] is dead!" << std::endl;
	displayPoints();
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_health > 0) {
		if (_health > amount) {
			std::cout << "ClapTrap [" << getName() << "] is damaged by ["
				<< amount << "] point(s)!" << std::endl;
			_health -= amount;
		}
		else {
			_health = 0;
			std::cout << "ClapTrap [" << getName() << "] is damaged by ["
				<< amount << "] point(s) and is dead!" << std::endl;
		}
	}
	else
		std::cout << "ClapTrap [" << getName() << "] is dead!" << std::endl;
	displayPoints();
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_health > 0) {
		if (_energy > 0) {
			std::cout << "ClapTrap [" << getName() << "] is repaired by ["
				<< amount << "] point(s)!" << std::endl;
			_health += amount;
			_energy--;
		}
		else
			std::cout << "ClapTrap [" << getName() << "] can't be repaired!" << std::endl;
	}
	else
		std::cout << "ClapTrap [" << getName() << "] is dead!" << std::endl;
	displayPoints();
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
