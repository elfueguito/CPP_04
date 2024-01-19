/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:35:54 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/19 16:02:17 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/////////////////// constructor & destructor /////////////////

AMateria::AMateria()
{
	std::cout << "AMateria constructor called" << std::endl;
	return;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria type constructor called" << std::endl;
	return;
}

AMateria::AMateria(AMateria const & src) : _type(src._type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	return;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
	return;
}

/////////////////// member functions  /////////////////
std::string const & AMateria::getType() const
{
	return(this->_type);
}


void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria virtually called on " << target.getName() << std::endl;
}
AMateria& AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}