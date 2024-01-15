/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:53:12 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/11 16:29:58 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
public :
		Brain();
		~Brain();
		Brain(Brain const & src);

		std::string ideas[100];

		Brain& operator=(Brain const & rhs);

		void	setIdea(int idx, std::string idea);
		std::string const getIdea(int idx) const;
};

#endif