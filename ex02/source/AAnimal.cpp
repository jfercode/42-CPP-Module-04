/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:28:16 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 13:17:30 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy)
{
	this->type = copy.type;
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "[" << type << "] makes some noise!" << std::endl;
}

std::string AAnimal::getType() const
{
	return (type);
}
