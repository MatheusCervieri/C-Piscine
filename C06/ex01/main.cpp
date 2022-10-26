/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:41:30 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/26 11:56:27 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

/*uintptr_t is an unsigned integer type that is capable of storing a data pointer*/

/*reinterpret_cast --> you able to reinterpret any adress with any other adress*/


struct Data
{
	int		i;
	char	c;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}


int main()
{
	Data data;
	Data *ptr;
	uintptr_t raw;

	data.i = 42;
	data.c = 'M';

	raw = serialize(&data);
	ptr = deserialize(raw);
	std::cout << ptr->i << std::endl;
	std::cout << ptr->c << std::endl;
	return (0);
}