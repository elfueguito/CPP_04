/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:42:05 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/19 15:06:39 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	this->_initEmptyMaterias();
	return;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "MateriaSource copy Constructor called" << std::endl;
	this->_initEmptyMaterias();
	*this  = src;
	return;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	this->_deleteMaterias();
	return;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhv)
{
	if(this != &rhv)
	{
		this->_deleteMaterias();
		for(int i = 0; i < this->_nbOfMaterias; i++)
		{
			if(rhv._materias[i] != NULL)
				this->_materias[i] = rhv._materias[i]->clone();
			
		}
	}
	return(*this);
}

void MateriaSource::_initEmptyMaterias()
{
	for (int i = 0; i < this->_nbOfMaterias; i++)
		this->_materias[i] = NULL;
	return;
}

void	MateriaSource::_deleteMaterias()
{
	for(int i = 0; i < this->_nbOfMaterias; i++)
	{
		if (this->_materias[i] != NULL)
		{
			delete(this->_materias[i]);
			this->_materias[i] = NULL;
		}
	}
	return;
}

void	MateriaSource::learnMateria(AMateria* src)
{
	if (src == NULL)
	{
		std::cout << "MateriaSource can't learn nothing from src beacau it's empty" << std::endl;
		return;
	}
	for(int i = 0; i < this->_nbOfMaterias; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = src;
			std::cout << "Materia of type" << this->_materias[i]->getType() << "learned" << std::endl;
			return;
		}
	}
	std::cout << "MateriaSource can't learn any more materia." << std::endl;
	delete src;
	return;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_nbOfMaterias; i++)
	{
		if (this->_materias[i]->getType() == type)
			return(this->_materias[i]->clone());
	}
	std::cout << "Didn't found a marteria of type" << type << std::endl;
	return (0);
}
