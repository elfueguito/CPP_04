/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:02:31 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/15 18:02:13 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//////////////constructor & destructor///////////////

Cat::Cat( void ) : AAnimal(), _brain(new Brain())
{
	std::cout << "Cat constructor Called" << std::endl;
	this->_type = "Cat";
	return;
}

Cat::Cat( Cat const & src ) : AAnimal ("Cat"), _brain(NULL)
{
	std::cout << "Cat copy constructor called" << std::endl;
	( * this ) = src;
	return;
}

Cat::~Cat( void )
{
	std::cout << "destructor cat called" << std::endl;
	delete(this->_brain);
	return;
}


Cat& Cat::operator=(Cat const & rhv)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &rhv)
	{
		this->_type = rhv._type;
		if (this->_brain != NULL)
			delete(this->_brain);
		this->_brain = new Brain(*rhv._brain);
	}
	return( * this );
}

void	Cat::makeSound() const 
{
	std::cout << "miaou" << std::endl;
	return;
}

Brain* Cat::getBrain() const
{
	return (this->_brain);
}