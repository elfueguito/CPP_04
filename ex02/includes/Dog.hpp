/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:57:16 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/15 18:00:22 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP

# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
		Brain* _brain;
public:
		Dog();
		Dog(Dog const & src);
		virtual ~Dog();
		
		Dog & operator=( Dog const & rhs );	
		
		Brain* getBrain() const;
		void makeSound() const;
};

#endif