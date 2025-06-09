/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <jaferna2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:27:46 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/09 10:36:07 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"


AMateria::AMateria(std::string const & type) 
	: _type(type) {}


AMateria::~AMateria() {}

std::string const & AMateria::getType() const 
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	(void) target;
}