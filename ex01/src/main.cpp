/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 06:35:06 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/05 06:36:02 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main () {
	ScavTrap no_name;
	no_name.attack("Zero");
	no_name.beRepaired(1);
	no_name.takeDamage(11);
	no_name.guardGate();
	no_name.displayInfo();
	ScavTrap new_no_name("New");
	new_no_name.displayInfo();
	no_name = new_no_name;
	no_name.displayInfo();
	
	std::cout << std::endl;

	ScavTrap first("First");
	first.attack("One");
	first.takeDamage(9);
	first.beRepaired(4);
	first.guardGate();
	first.displayInfo();

	std::cout << std::endl;

	ScavTrap second(first);
	// second.setName("Second");
	second.displayInfo();

	std::cout << std::endl;

	return 0;
}