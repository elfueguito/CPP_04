/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:21:49 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/17 18:18:32 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "MateriaSource.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
private:
		std::string _name;
		AMateria* _inventory[4];
		void _initializeEmptyInventory( void );
		void _deleteInventory( void );
		static const int _numberMaxOfItems = 4;
public:
		Character();
		Character(std::string name);
		~Character();
		
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		Character & operator=(Character const & src);
};

#endif