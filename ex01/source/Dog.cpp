/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:37:54 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 13:02:15 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog constructor called" << std::endl;
    brain = new Brain(*other.brain);
    this->type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
        this->type = other.type;
    }
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "[" << type << "] Woof woof!" << std::endl;
}

