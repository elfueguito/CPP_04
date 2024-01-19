/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:31:16 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/19 13:45:36 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		~MateriaSource();

		MateriaSource& operator=(MateriaSource const & rhv);

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);

private:
		static const int	_nbOfMaterias = 4;
		AMateria*			_materias[4];

		void				_initEmptyMaterias();
		void				_deleteMaterias();
};

#endif 