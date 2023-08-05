/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 22:03:17 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/05 22:34:24 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main() {
	FragTrap no_name;
	no_name.attack("Zero");
	no_name.beRepaired(1);
	no_name.takeDamage(11);
	no_name.highFivesGuys();
	no_name.displayInfo();
	FragTrap new_no_name("New");
	new_no_name.displayInfo();
	no_name = new_no_name;
	no_name.displayInfo();
	
	std::cout << std::endl;

	FragTrap first("First");
	first.attack("One");
	first.takeDamage(9);
	first.beRepaired(4);
	first.highFivesGuys();
	first.displayInfo();

	std::cout << std::endl;

	FragTrap second(first);
	// second.setName("Second");
	second.displayInfo();

	std::cout << std::endl;

	return 0;
}