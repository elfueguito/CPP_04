/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:56:19 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/11 15:53:36 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
		Brain* _brain;

public:
		Cat();
		~Cat();
		Cat(Cat const & src);

		Cat & operator=( Cat const & rhs );

		Brain* getBrain() const;
		void makeSound() const;
};

#endif