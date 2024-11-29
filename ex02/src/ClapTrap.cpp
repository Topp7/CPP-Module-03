/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:11:41 by stopp             #+#    #+#             */
/*   Updated: 2024/11/23 18:25:15 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _HP(10), _energy(10), _AD(0)
{
	std::cout << "Default ClapTrap has been created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(10), _energy(10), _AD(0)
{
	std::cout << "ClapTrap " <<_name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_name = copy.getname();
	_HP = copy.getHP();
	_energy = copy.getenergy();
	_AD = copy.getAD();
	std::cout << "ClapTrap " << _name << " has been copied" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &copy)
{
	if(this != &copy)
	{
		_name = copy.getname();
		_HP = copy.getHP();
		_energy = copy.getenergy();
		_AD = copy.getAD();
	}
	std::cout << "ClapTrap " << _name << " has been copied(assigned)" << std::endl;
	return *this;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

int ClapTrap::getAD()const
{
	return (this->_AD);
}
int	ClapTrap::getHP()const
{
	return (this->_HP);
}
int ClapTrap::getenergy()const
{
	return (this->_energy);
}
std::string ClapTrap::getname()const
{
	return (this->_name);
}

void ClapTrap::set_AD(int dmg)
{
	this->_AD = dmg;
	std::cout << "ClapTrap " << _name << " now has " << dmg << " Attack Damage!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_HP < 1)
		std::cout << "ClapTrap " << _name << " can't attack because it's destroyed!" << std::endl;
	else if ( _energy < 1)
		std::cout << "ClapTrap " << _name << " can't attack because it has no energy left!" << std::endl;
	else
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " attacked " << target << ", dealing " << _AD << " point/s of Damage!" << std::endl;
	}
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_HP < 1)
		std::cout << "ClapTrap " << _name << " cant take damage because it's destroyed!" << std::endl;
	else
	{
		_HP -= amount;
		if (_HP < 1)
		std::cout << "ClapTrap " << _name << " got destroyed!" << std::endl;
		else
		std::cout << "ClapTrap " << _name << " took " << amount << " point/s of damage and has " << _HP << " Hit Points left!" << std::endl;
	}
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_HP < 1)
		std::cout << "ClapTrap " << _name << " can't repair itself because it's destroyed!" << std::endl;
	else if ( _energy < 1)
		std::cout << "ClapTrap " << _name << " can't repair itself because it has no energy left!" << std::endl;
	else
	{
		_HP += amount;
		_energy--;
		if (_HP > 10)
			_HP = 10;
		std::cout << "ClapTrap " << _name << " repaired itself for " << amount << " points and has " << _HP << " Hit Points now!" << std::endl;
	}
}
