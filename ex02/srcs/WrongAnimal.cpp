/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimaWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:03:50 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/11 11:06:15 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/////////////////constructor & destructor /////////////////////////
WrongAnimal::WrongAnimal( void ) : _type("default WrongAnimal")
{
	std::cout << "Constructor WrongAnimal Default called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type)
{
	std::cout << "constructor WrongAnimal called for a " << type << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
	( * this ) = src;
	return;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor WrongAnimal called for a " << this->_type << std::endl;
	return;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << this->_type << " ( default WrongAnimal sound )" << std::endl;
	return;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &rhv)
{
	std::cout << "WrongAnimal assignment method called" <<std::endl;
	if (this != &rhv)
		this->_type = rhv._type;
	return ( *this);
}

std::string WrongAnimal::getType( void ) const
{
	return (this->_type);
}
