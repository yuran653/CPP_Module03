/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:55:04 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/06 20:19:36 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap no_name;
	no_name.attack("Zero");
	no_name.beRepaired(1);
	no_name.takeDamage(11);
	no_name.displayInfo();
	ClapTrap new_no_name("New");
	new_no_name.displayInfo();
	no_name = new_no_name;
	no_name.displayInfo();
	
	std::cout << std::endl;

	ClapTrap first("First");
	first.takeDamage(9);
	first.attack("One");
	first.beRepaired(4);
	first.attack("Two");
	first.beRepaired(4);
	first.attack("Three");
	first.beRepaired(4);
	first.attack("Four");
	first.beRepaired(4);
	first.attack("Five");
	first.beRepaired(4);
	first.attack("Six");
	first.takeDamage(100);
	first.beRepaired(200);
	first.displayInfo();

	std::cout << std::endl;

	ClapTrap second(first);
	// second.setName("Second");
	second.beRepaired(100);
	second.displayInfo();

	std::cout << std::endl;

	return 0;
}
