/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:44:18 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/11 12:37:34 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/////////////////constructor & destructor /////////////////////////
Animal::Animal( void ) : _type("default animal")
{
	std::cout << "Constructor Animal Default called" << std::endl;
	return;
}

Animal::Animal(std::string const type) : _type(type)
{
	std::cout << "constructor Animal called for a " << type << std::endl;
	return;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy constructor Animal called" << std::endl;
	( * this ) = src;
	return;
}

Animal::~Animal( void )
{
	std::cout << "Destructor Animal called for a " << this->_type << std::endl;
	return;
}

void	Animal::makeSound( void ) const
{
	std::cout << this->_type << " ( default Animal sound )" << std::endl;
	return;
}

Animal& Animal::operator=(Animal const &rhv)
{
	std::cout << "Animal assignment method called" <<std::endl;
	if (this != &rhv)
		this->_type = rhv._type;
	return ( *this);
}

std::string Animal::getType( void ) const
{
	return (this->_type);
}
