/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:10:52 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 12:26:10 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL
# define WRONG_ANIMAL

# pragma once
# include <iostream>
# include <string>

class WrongAnimal
{
  private:
	/**/
  
  protected:
	std::string type;

  public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal &operator=(const WrongAnimal &copy);
	~WrongAnimal();
	void makeSound() const;
	std::string getType() const;
};

#endif /*WRONG_ANIMAL*/