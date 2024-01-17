/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:21:46 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/17 16:16:09 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
public:
		Cure();
		Cure(Cure const & src);
		~Cure();
		
		Cure& operator=(Cure const & rhv);
		
		AMateria* clone() const;
		void use( ICharacter& target );	
};

#endif