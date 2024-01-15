/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:44:11 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/15 18:04:41 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>
#include <string>


class AAnimal
{
protected:
		std::string _type;

public:
		AAnimal();
		AAnimal(std::string const type);
		AAnimal(AAnimal const & src);
		virtual ~AAnimal();

		std::string getType() const;
		virtual void makeSound() const = 0;

		AAnimal & operator=( AAnimal const & rhs );
};

#endif