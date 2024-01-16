/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:21:54 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/16 14:28:12 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria 
{
public:
		Ice();
		Ice(Ice const & src);
		~Ice();
			
		Ice& operator=(Ice const & rhv);
		AMateria* clone() const;
		void use( ICharacter& target );

};

#endif