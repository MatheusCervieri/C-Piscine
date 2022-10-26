/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:37:53 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/26 15:42:55 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>

const T	&max(const T &x ,const T &y)
{
    if (x >= y)
        return (x);
    else
        return (y);
}

template< typename U > 

const U	&min(const U &x ,const U &y)
{
    if (x <= y)
        return (x);
    else
        return (y);
}

template<typename V>

void swap(V &x, V &y)
{
	V temp = x;
	x = y;
	y = temp;
}
