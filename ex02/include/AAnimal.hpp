/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:25:14 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 13:18:01 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# pragma once
# include <iostream>

class AAnimal
{
  private:
	/**/
  protected:
	std::string type;

  public:
	AAnimal();
	AAnimal(const AAnimal& copy);
	AAnimal& operator=(const AAnimal& copy);
	virtual ~AAnimal();
	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif