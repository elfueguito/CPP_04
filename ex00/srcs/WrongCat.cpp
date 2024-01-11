/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:04:06 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/11 14:07:04 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//////////////constructor & destructor///////////////

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor Called" << std::endl;
	return;
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal ("WrongCat")
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	( * this ) = src;
	return;
}

WrongCat::~WrongCat( void )
{
	std::cout << "destructor WrongCat called" << std::endl;
	return;
}


WrongCat& WrongCat::operator=(WrongCat const & rhv)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this!= &rhv)
	{
		WrongCat::operator=(rhv);
	}
	return( * this );
}

void	WrongCat::makeSound() const 
{
	std::cout << "Cuicui" << std::endl;
	return;
}

