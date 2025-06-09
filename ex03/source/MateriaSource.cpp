/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <jaferna2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:07:12 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/09 10:40:13 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		_templates[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_templates[i])
			delete _templates[i];
	}
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (m == NULL)
		return;
	for (size_t i = 0; i < 4; i++)
	{
		if (!_templates[i])
		{
			_templates[i] = m;
			return;
		}
	}	
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_templates[i] && _templates[i]->getType() == type)
		{
			if (type == "ice")
				return new Ice;
			else if (type == "cure")
				return new Cure;
		}
	}
	return NULL;
}