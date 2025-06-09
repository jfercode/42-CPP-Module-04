/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <jaferna2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:22:30 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/09 10:33:57 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		/***/
		std::string _type;

	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		
		std::string const & getType() const;

		virtual AMateria *clone() const = 0;
		virtual void use (ICharacter& target);
};

#endif
