/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 00:34:04 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/06 05:24:55 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string _name;
		std::string _name_clap;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap& otherDiamondTrap);
		~DiamondTrap();

		DiamondTrap& operator=(const DiamondTrap& otherDiamondTrap);
		
		std::string	getNameClap();
		void		setNameClap(std::string name);
		void		attack(const std::string& target);
		void		whoAmI();
};
