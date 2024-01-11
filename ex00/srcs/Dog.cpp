/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:03:08 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/11 12:28:39 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog constructor Called" << std::endl;
	return;
}

Dog::Dog( Dog const & src ) : Animal ("Dog")
{
	std::cout << "Dog copy constructor called" << std::endl;
	( * this ) = src;
	return;
}

Dog::~Dog( void )
{
	std::cout << "destructor cat called" << std::endl;
	return;
}

Dog& Dog::operator=(Dog const & rhv)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this!= &rhv)
	{
		Dog::operator=(rhv);
	}
	return( * this );
}
void	Dog::makeSound() const
{
	std::cout << "whaaff whaaf" << std::endl;
	return;
}
