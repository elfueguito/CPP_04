/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:02:31 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/11 12:17:01 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//////////////constructor & destructor///////////////

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat constructor Called" << std::endl;
	return;
}

Cat::Cat( Cat const & src ) : Animal ("Cat")
{
	std::cout << "Cat copy constructor called" << std::endl;
	( * this ) = src;
	return;
}

Cat::~Cat( void )
{
	std::cout << "destructor cat called" << std::endl;
	return;
}


Cat& Cat::operator=(Cat const & rhv)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this!= &rhv)
	{
		Cat::operator=(rhv);
	}
	return( * this );
}

void	Cat::makeSound() const 
{
	std::cout << "miaou" << std::endl;
	return;
}