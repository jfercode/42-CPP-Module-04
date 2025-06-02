/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:25:14 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/02 18:42:32 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
  private:
	/**/
  protected:
	std::string type;
  public:
	Animal();
	virtual ~Animal();
	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif