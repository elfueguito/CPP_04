/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:25:03 by cbacquet          #+#    #+#             */
/*   Updated: 2024/01/11 14:05:50 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		std::cout << "-- Animal" << std::endl;
		const Animal *	animal = new Animal();
		std::cout << "Animal type: " << animal->getType() << std::endl;
		animal->makeSound();
		delete animal;
		std::cout << std::endl;
		
	}	
	{
		std::cout << "-- Cat by cat class" << std::endl;
		const Cat *	cat = new Cat();
		std::cout << "Cat type: " << cat->getType() << std::endl;
		cat->makeSound();
		delete cat;
		std::cout << std::endl;
		
	}
	{
		std::cout << "-- Cat by animal parent class" << std::endl;
		const Animal * cat = new Cat();
		std::cout << "Animal type: " << cat->getType() << std::endl;
		cat->makeSound();
		delete cat;
		std::cout << std::endl;
	}
	{
		std::cout << "-- Dog by dog class" << std::endl;
		const Dog *	dog = new Dog();
		std::cout << "Dog type: " << dog->getType() << std::endl;
		dog->makeSound();
		delete dog;
		std::cout << std::endl;
	}
	{
		std::cout << "-- Dog by animal parent class" << std::endl;
		const Animal * dog = new Dog();
		std::cout << "Animal type: " << dog->getType() << std::endl;
		dog->makeSound();
		delete dog;
		std::cout << std::endl;
	}
	{
		std::cout << "-- WrongAnimal" << std::endl;
		const WrongAnimal *	wronganimal = new WrongAnimal();
		std::cout << "WrongAnimal type: " << wronganimal->getType() << std::endl;
		wronganimal->makeSound();
		delete wronganimal;
		std::cout << std::endl;
		
	}	
	{
		std::cout << "-- WrongCat by Wrongcat class" << std::endl;
		const WrongCat *	wrongcat = new WrongCat();
		std::cout << "WrongCat type: " << wrongcat->getType() << std::endl;
		wrongcat->makeSound();
		delete wrongcat;
		std::cout << std::endl;
		
	}
	{
		std::cout << "-- WrongCat by Wronganimal parent class" << std::endl;
		const WrongAnimal * wrongcat = new WrongCat();
		std::cout << "WrongAnimal type: " << wrongcat->getType() << std::endl;
		wrongcat->makeSound();
		delete wrongcat;
		std::cout << std::endl;
	}
	return (0);
}