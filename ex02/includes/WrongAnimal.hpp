/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:57:57 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/11 12:46:13 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
		std::string _type;
		
public:
		WrongAnimal();
		WrongAnimal(std::string const type);
		WrongAnimal(WrongAnimal const & src);
		~WrongAnimal();

		std::string getType() const;
		void makeSound() const;

		WrongAnimal & operator=( WrongAnimal const & rhs );
};

#endif