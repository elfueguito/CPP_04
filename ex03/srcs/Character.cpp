/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:08:47 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/18 17:38:57 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character constructor called" << std::endl;
	return;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character name constructor called" << std::endl;
	return;
}

Character::~Character()
{
	std::cout << "Character Destructor Called" << std::endl;
	return;
}

Character & Character::operator=(Character const & rhv)
{
	if (this != &rhv)
	{
		this->_name = rhv.name;
		this->_deleteinventory();
		for (int i = 0; i < this->_numberMaxOfItems; i++)
		{
			if (rhv._inventory[i] != NULL)
				this._inventory[i] = rhv._inventory[i]->clone();
		} 
	}
	return (*this);
}


std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "Not a good Materia object" << std::endl;
		return;
	}
	for (int i  = 0; i < this->_numberOfMaxItems; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return;
		}
	}
	std::cout << "can't equip more items" << stD::endl;
	return;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this-> _numberMaxOfItems)
	{
		std::cout << this->_name << "can't unequip because the index is not good" << std::endl;
		return;
	}
	if (this->_inventory[idx] == NULL)
}

void Character::use(int idx, ICharacter& target)
{
	
}