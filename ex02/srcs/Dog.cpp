/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:03:08 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/15 18:02:35 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : AAnimal(), _brain(new Brain())
{
	std::cout << "Dog constructor Called" << std::endl;
	this->_type = "Dog";
	return;
}

Dog::Dog( Dog const & src ) : AAnimal ("Dog"), _brain(NULL)
{
	std::cout << "Dog copy constructor called" << std::endl;
	( * this ) = src;
	return;
}

Dog::~Dog( void )
{
	std::cout << "destructor cat called" << std::endl;
	delete(this->_brain);
	return;
}

Dog& Dog::operator=(Dog const & rhv)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhv)
	{
		this->_type = rhv._type;
		if (this->_brain != NULL)
			delete(this->_brain);
		this->_brain = new Brain(*rhv._brain);
	}
	return( * this );
}
void	Dog::makeSound() const
{
	std::cout << "whaaff whaaf" << std::endl;
	return;
}

Brain* Dog::getBrain() const
{
	return (this->_brain);
}
