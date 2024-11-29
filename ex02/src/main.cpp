/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:03:24 by stopp             #+#    #+#             */
/*   Updated: 2024/11/29 15:36:30 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void)
{
	ClapTrap	Karl("Karl");
	ClapTrap	Gustav("Gustav");
	ClapTrap	Karl_Copy(Karl);
	ScavTrap	ScavTrap("ScavTrap");
	FragTrap	Frag("Fraggy");

	std::cout << std::endl;

	Karl.attack(Karl_Copy.getname());
	Karl_Copy.takeDamage(Karl.getAD());

	std::cout << std::endl;

	Karl_Copy.set_AD(5);
	Karl_Copy.attack(Gustav.getname());
	Gustav.takeDamage(Karl_Copy.getAD());

	std::cout << std::endl;

	for (int i = 0; i < 11; i++)
		Gustav.beRepaired(1);

	std::cout << std::endl;

	ScavTrap.attack(Karl.getname());
	Karl.takeDamage(ScavTrap.getAD());

	std::cout << std::endl;

	Karl.beRepaired(1);
	Karl.attack(Gustav.getname());

	ScavTrap.guardGate();

	std::cout << std::endl;

	Frag.highFivesGuys();
	Frag.takeDamage(99);
	Frag.highFivesGuys();
	Frag.takeDamage(1);
	Frag.highFivesGuys();

	std::cout << std::endl;

	return (0);
}