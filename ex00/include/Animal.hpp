/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:25:14 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/27 13:17:15 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# pragma once
# include <iostream>

class Animal
{
  private:
	/**/
  protected:
	std::string type;

  public:
	Animal();
	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType() const;
};

#endif