/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 00:36:12 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/06 04:54:13 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	ClapTrap a;
	ClapTrap b("One");
	ClapTrap c("TWo");
	a = c;
	b.displayInfo();
	c.displayInfo();

	DiamondTrap d("Three");
	d.attack("555");
	d.whoAmI();
	d.displayInfo();
	return 0;
}