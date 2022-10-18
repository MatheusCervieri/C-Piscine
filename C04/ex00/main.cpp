/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:31:58 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/18 11:23:38 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i; 


    const WrongAnimal *cat = new WrongCat();
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    delete cat; 
    
    
return 0;
}