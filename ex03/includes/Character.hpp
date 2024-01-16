/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:21:49 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/16 14:53:06 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMatiera.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
private:
		std::string name;
		AMateria* inventory[4];
		void initializeEmptyInventory( void );
		void deleteInventory( void );
		static const int _numberMaxOfItems = 4;
public:
		Character(const std::string& name);
		~Character();
		
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		Character & operator=(Character const & src);
};

#endif