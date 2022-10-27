/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:56:57 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/26 16:03:09 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

template<typename T>

void	iter(T *array, size_t arr_len, void (*f)(T &))
{
	if (array == NULL || f == NULL)
		return ;
	for (size_t i = 0; i < arr_len; i++)
		f(array[i]);
}