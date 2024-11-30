/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:27:46 by stopp             #+#    #+#             */
/*   Updated: 2024/11/29 15:51:25 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name")
{
	this->_name = "default";
	this->_HP = FragTrap::_HP;
	this->_energy = ScavTrap::_energy;
	this->_AD = FragTrap::_AD;

	std::cout << " Default DiamondTrap created!" << std::endl;
}
DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_HP = FragTrap::_HP;
	this->_energy = ScavTrap::_energy;
	this->_AD = FragTrap::_AD;

	std::cout << "DiamondTrap " << this->_name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	_name = copy.getname();
	_HP = copy.getHP();
	_energy = copy.getenergy();
	_AD = copy.getAD();
	std::cout << "DiamondTrap " << _name << " has been copied" << std::endl;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &copy)
{
	if (this != &copy)
	{
		_name = copy.getname();
		_HP = copy.getHP();
		_energy = copy.getenergy();
		_AD = copy.getAD();
	}
	std::cout << "DiamondTrap " << _name << " has been copied(assigned)" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " has been destroyed!" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	if (_HP < 1)
		std::cout << "DiamondTrap " << _name << " doesnt know who it is, because its dead!" << std::endl;
	else
	{
		std::cout << "DiamondTrap name: " << this->_name << std::endl;
		std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
	}
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
