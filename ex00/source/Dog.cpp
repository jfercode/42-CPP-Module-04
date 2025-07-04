/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:37:54 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 12:06:13 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "[" << type << "] Woof woof!" << std::endl;
}

