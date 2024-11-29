/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:27:46 by stopp             #+#    #+#             */
/*   Updated: 2024/11/29 15:34:14 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_HP = 100;
	_energy = 100;
	_AD = 30;

	std::cout << " Default FragTrap created!" << std::endl;
}
FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->_HP = 100;
	_energy = 100;
	_AD = 30;
	std::cout << "FragTrap " << this->_name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	_name = copy.getname();
	_HP = copy.getHP();
	_energy = copy.getenergy();
	_AD = copy.getAD();
	std::cout << "FragTrap " << _name << " has been copied" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &copy)
{
	if (this != &copy)
	{
		_name = copy.getname();
		_HP = copy.getHP();
		_energy = copy.getenergy();
		_AD = copy.getAD();
	}
	std::cout << "FragTrap " << _name << " has been copied(assigned)" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (_HP > 0)
		std::cout << "FragTrap " << _name << ": Lets's high Five!" << std::endl;
	else
		std::cout << "FragTrap " << _name << " wants to high Five but is dead... :( " << std::endl;
}
