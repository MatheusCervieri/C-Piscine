/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:14:58 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/17 09:10:18 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Fixed
{
    public: 

    Fixed(void);
    
    Fixed(const Fixed& other);

    Fixed(const int value);

    Fixed(const float value); 

    Fixed& operator=(const Fixed& rhs);

    ~Fixed();

    int getRawBits (void) const;
    
    void setRawBits(int const raw);

    float toFloat (void) const;

    int   toInt(void) const; 

    private:
    
    static const int n_fraction;
    int fixed_point;

};

std::ostream &operator<<(std::ostream& COUT, Fixed const &fixed);