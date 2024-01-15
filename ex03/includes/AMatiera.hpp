/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMatiera.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:15:07 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/15 18:19:06 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

# define AMATERIA_HPP

class AMateria
{
protected:
		

public:
		AMateria(std::string const & type);
		

		std::string const & getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif