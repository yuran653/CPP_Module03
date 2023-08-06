/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 00:36:12 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/06 20:28:06 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap no_name;
	no_name.attack("Zero");
	no_name.beRepaired(1);
	no_name.takeDamage(11);
	no_name.highFivesGuys();
	no_name.displayInfo();
	DiamondTrap new_no_name("New");
	new_no_name.displayInfo();
	no_name = new_no_name;
	no_name.displayInfo();
	
	std::cout << std::endl;

	DiamondTrap first("First");
	first.attack("One");
	first.takeDamage(9);
	first.beRepaired(4);
	first.highFivesGuys();
	first.displayInfo();

	std::cout << std::endl;

	DiamondTrap second(first);
	// second.setName("Second");
	second.displayInfo();

	std::cout << std::endl;
	return 0;
}