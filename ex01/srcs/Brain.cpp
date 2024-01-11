/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:53:48 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/11 16:33:09 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	return;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	(*this) = src;
	return;
}

Brain& Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this!= &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return( * this );
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return;
}

void	Brain::setIdea(int idx, std::string idea)
{
	this->ideas[idx % 99] = idea;
	return;
}

std::string const Brain::getIdea(int idx) const
{
	if (idx < 0)
		idx = 0;
	return(this->ideas[idx % 99]);
}