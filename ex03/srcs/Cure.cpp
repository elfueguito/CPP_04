/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:28:02 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/18 17:08:04 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria ("cure")
{
	std::cout << "Cure Constructor called" << std::endl;
	return;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	std::cout << "Cure copy Constructor called" << std::endl;
	return;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
	return;
}

Cure & Cure::operator=(Cure Const & rhv)
{
	if (this != &rhv)
		this->_type = rhv._type;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria* cureclone = new Cure;
	return (cureclone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}
