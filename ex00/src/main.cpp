/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:55:04 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/04 01:17:53 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap no_name;
	no_name.attack("Non existent");
	no_name.beRepaired(1);
	no_name.takeDamage(11);

	ClapTrap first("First");
	no_name = first;
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
	ClapTrap second(first);
	no_name.attack("Seven");
	no_name.beRepaired(50);
	first.takeDamage(100);
	second.takeDamage(100);
	no_name.takeDamage(100);
	first.beRepaired(200);
	second.beRepaired(200);
	no_name.beRepaired(200);

	return 0;
}
