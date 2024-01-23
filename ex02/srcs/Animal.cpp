/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:44:18 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/18 15:49:32 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/////////////////constructor & destructor /////////////////////////
AAnimal::AAnimal( void ) : _type("default animal")
{
	std::cout << "Constructor AAnimal Default called" << std::endl;
	return;
}

AAnimal::AAnimal(std::string const type) : _type(type)
{
	std::cout << "constructor AAnimal called for a " << type << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "Copy constructor AAnimal called" << std::endl;
	( * this ) = src;
	return;
}

AAnimal::~AAnimal( void )
{
	std::cout << "Destructor AAnimal called for a " << this->_type << std::endl;
	return;
}

void	AAnimal::makeSound( void ) const
{
	std::cout << this->_type << " ( default Animal sound )" << std::endl;
	return;
}

AAnimal& AAnimal::operator=(AAnimal const &rhv)
{
	std::cout << "AAnimal assignment method called" <<std::endl;
	if (this != &rhv)
		this->_type = rhv._type;
	return ( *this);
}

std::string AAnimal::getType( void ) const
{
	return (this->_type);
}
