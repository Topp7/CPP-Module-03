/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:03:24 by stopp             #+#    #+#             */
/*   Updated: 2024/11/20 17:58:35 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Karl("Karl");
	ClapTrap	Gustav("Gustav");
	ClapTrap	Karl_Copy(Karl);

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

	Karl_Copy.set_AD(10);
	Karl_Copy.attack(Karl.getname());
	Karl.takeDamage(Karl_Copy.getAD());

	std::cout << std::endl;

	Karl.beRepaired(1);
	Karl.attack(Gustav.getname());
	Karl.takeDamage(Gustav.getAD());
	return (0);
}
