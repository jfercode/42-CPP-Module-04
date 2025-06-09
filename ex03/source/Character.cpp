/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <jaferna2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 09:52:10 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/09 10:38:51 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	for (size_t i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

std::string const &Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return;
	for (size_t i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return;
		}
	}
}

void	Character::unequip(int indx)
{
	if (indx < 0 || indx >= static_cast<int>(sizeof(_inventory) / sizeof(_inventory[0])))
		return;
	if (_inventory[indx])
	{
		_inventory[indx] = NULL;
	}
}

void Character::use(int indx, ICharacter &target)
{
	if (indx < 0 || indx >= static_cast<int>(sizeof(_inventory) / sizeof(_inventory[0])))
		return;
	if (_inventory[indx])
	{
		_inventory[indx]->use(target);
	}
}
