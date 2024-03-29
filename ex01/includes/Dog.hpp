/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:57:16 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/15 16:02:59 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP

# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
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