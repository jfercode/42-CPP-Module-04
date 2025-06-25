/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:18:07 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 12:18:57 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return(*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "[" << type << "] Meaow meaow!" << std::endl;
}
