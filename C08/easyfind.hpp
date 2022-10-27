/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:04:13 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/27 12:00:24 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

class NotFoundE : public std::exception
{
	public:
		char const * what() const throw()
		{
			return "Could't find the number inside the container!";
		}
};

template <typename T>

int &easyfind(T &container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);

	if (it == container.end())
		throw NotFoundE();

	return *it;
}

#endif