/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:10:00 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/27 12:57:54 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>

class Span
{
    private:
        long unsigned int n;
        std::vector<int> v;

    public:
        Span(void);
        Span(int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();
	
	void addNumber(int num);
	void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
	int shortestSpan(void) const;
	int longestSpan(void) const;

    class FullE : public std::exception
		{
			public:
				char const * what() const throw()
				{
					return "Error: Span is full!";
				}
		};
        
    class EmptyE : public std::exception
		{
			public:
				char const * what() const throw()
				{
					return "Span is empty or it contains only one element!";
				}
		};
};

#endif