/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:32:59 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/27 10:09:40 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>

class Array
{
	private:
		T		    *array;
		unsigned int _size;
	public:
		Array(void): array(new T[0]), _size(0)
        {
            
        };
		Array(unsigned size): array(new T[size]), _size(size)
        {
            
        };
		Array(const Array& other)
        {
			*this = other;
		};
		~Array()
        {
			delete[] array;
		};
		unsigned int    size(void) const
		{
			return (this->_size);
		}        
		Array& operator=(const Array& other)
		{
			if (this == &other)
				return (*this);
			_size = other._size;
			array = new T[_size];
			for (unsigned int i = 0; i < other._size; i++)
				array[i] = other.array[i];
			return (*this);
		}

		T& operator[](unsigned int i)
		{
			if (i < 0 || this->_size <= i)
                throw Array::InvalidIndexE();
			return array[i];
		}

        const T & operator[](unsigned int i) const
		{
			if (i > this->_size)
				throw Array::InvalidIndexE();
			return (this->array[i]);
		};

		class InvalidIndexE : public std::exception
		{
			public:
				char const * what() const throw()
				{
					return "Invalid index value";
				}
		};

};

#endif