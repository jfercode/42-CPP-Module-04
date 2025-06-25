/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:53:12 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 12:01:50 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return(*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "[" << type << "] Meaow meaow!" << std::endl;
}
