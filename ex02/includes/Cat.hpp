/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:56:19 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/15 18:00:17 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
		Brain* _brain;

public:
		Cat();
		Cat(Cat const & src);
		virtual ~Cat();

		Cat & operator=( Cat const & rhs );

		void makeSound() const;
		Brain* getBrain() const;
};

#endif