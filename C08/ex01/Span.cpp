/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:09:57 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/27 12:57:20 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>

Span::Span(void) : n(0)
{
    
}

Span::Span(int n) : n(n)
{
    
}

Span::Span(const Span& other) : n(other.n), v(other.v)
{
    
}

Span::~Span()
{
    
}

Span& Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;
	n = other.n;
	v = other.v;
	return *this;
}

void Span::addNumber(int num)
{
	if (v.size() == n)
		throw FullE();
	v.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	std::vector<int>::iterator it = begin;
	
	while (it != end) {
    	if (v.size() == n)
			throw FullE();
		v.push_back(*it);
    	it++;
	}
}

int Span::shortestSpan(void) const
{
    int min_diff;
    int prev;
    
	if (v.empty() || v.size() == 1)
		throw EmptyE();
	std::vector<int> copy = v;
	std::sort(copy.begin(), copy.end());
	min_diff = INT_MAX;
	prev = *copy.begin();
	for (std::vector<int>::iterator iter = copy.begin() + 1; iter != copy.end(); iter++)
	{
		min_diff = std::min(min_diff, *iter - prev);
		prev = *iter;
	}
	return min_diff;
}

int Span::longestSpan(void) const
{
	if (v.empty() || v.size() == 1)
		throw EmptyE();

	std::vector<int> copy = v;
	std::sort(copy.begin(), copy.end());

	return (copy.back() - copy.front());
}
