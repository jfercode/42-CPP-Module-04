/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:31:09 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/27 13:17:54 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/WrongAnimal.hpp"
#include "include/Cat.hpp"
#include "include/WrongCat.hpp"
#include "include/Dog.hpp"

int	main(void)
{
	{
		const Animal	*meta = new Animal();
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();
	
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl << "=== CAT ===" << std::endl;
	{
		const Animal* i = new Cat();
		std::cout << i->getType() << std::endl;
		i->makeSound();
		delete i;
	}
	std::cout << std::endl << "=== WRONGCAT ===" << std::endl;
	{
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << std::endl;
		i->makeSound();
		delete i;
	}
	return (0);
}
