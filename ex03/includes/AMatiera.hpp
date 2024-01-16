/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMatiera.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:15:07 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/16 14:22:25 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

# define AMATERIA_HPP

#include <iostream>

class AMateria
{
protected:
		//[a completer ]

public:
		AMateria(std::string const & type);
		//[a completer]

		std::string const & getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif