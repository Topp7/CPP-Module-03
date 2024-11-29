/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:51:34 by stopp             #+#    #+#             */
/*   Updated: 2024/11/23 18:38:48 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	ClapTrap
{
	protected:
		std::string	_name;
		int			_HP;
		int			_energy;
		int			_AD;

	public:
	//OC Form
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator = (const ClapTrap &src);
		~ClapTrap();
	//public member functions
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	//setter
		void	set_AD(int dmg);
	//getter
		std::string	getname()const;
		int			getHP()const;
		int			getenergy()const;
		int			getAD()const;
};
