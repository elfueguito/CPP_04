/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:44:11 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/11 14:16:44 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>
#include <string>


class Animal
{
protected:
		std::string _type;

public:
		Animal();
		Animal(std::string const type);
		Animal(Animal const & src);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const;

		Animal & operator=( Animal const & rhs );
};

#endif