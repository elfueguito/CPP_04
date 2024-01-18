/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:30:58 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/18 17:08:10 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria ("ice")
{
	std::cout << "Ice constructor called " << std::endl;
	return;
}

Ice::Ice(Ice const & src) : AMateria ("ice")
{
	std::cout << "Ice copy constructor called " << std::endl;
	(*this) = src;
	return;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor Called " << std::endl;
	return;
}

Ice& Ice::operator=(Ice const & rhv)
{
	if (this != &rhv)
		this->_type = rhv._type;
	return (*this);
	
}

AMateria* Ice::clone() const
{
	AMateria* iceclone = new Ice;
	return (iceclone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at" << target.getName() << " *" << std::endl;
	return;
}



