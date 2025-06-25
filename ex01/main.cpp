/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:31:09 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 13:10:56 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include <iostream>

int	main(void)
{
	const int	size = 10;
	Animal		*animals[size];
	Dog			original;
	Dog			copy;

	for (int i = 0; i < size / 2; ++i)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; ++i)
		animals[i] = new Cat();
	std::cout << "\n--- Testing Deep Copy ---\n" << std::endl;
	original.makeSound();
	copy = original;
	copy.makeSound();
	std::cout << "\n--- Cleanup ---\n" << std::endl;
	for (int i = 0; i < size; ++i)
		delete animals[i];
	return (0);
}
