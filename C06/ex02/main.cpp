/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:13:40 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/26 15:10:04 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <unistd.h>

Base * generate(void)
{
	srand(time(NULL));
	int	type = rand() % 3;
	if (type == 0)
		return (new A);
	if (type == 1)
	    return (new B);
	if (type == 2)
		return (new C);
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	Base a;
	Base b;
	Base c;

	try
	{
		a = dynamic_cast<A&> (p);
		std::cout << "A" << std::endl;
	}
    catch(std::exception & e)
    {}
	try
	{
		b = dynamic_cast<B&> (p);
		std::cout << "B" << std::endl;
	}
    catch(std::exception & e)
    {}
	try
	{
		c = dynamic_cast<C&> (p);
		std::cout << "C" << std::endl;
	}
    catch(std::exception & e)
    {}
}

int main()
{
    Base *b1;
    Base *b2;
    b1 = generate();
    usleep(1000000);
    b2 = generate();

    //Pointer
    identify(b1);
    identify(b2);


    b1 = generate();
    usleep(1000000);
    b2 = generate();
    //Reference
    identify(*b1);
    identify(*b2);
}