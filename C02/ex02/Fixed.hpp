/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:14:58 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/17 09:35:16 by mvieira-         ###   ########.fr       */
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

    Fixed               &operator++(void);
    Fixed               &operator--(void);
    Fixed               operator++(int);
    Fixed               operator--(int);
    bool                operator>(const Fixed &value) const;
    bool                operator<(const Fixed &value) const;
    bool                operator>=(const Fixed &value) const;
    bool                operator<=(const Fixed &value) const;
    bool                operator==(const Fixed &value) const;
    bool                operator!=(const Fixed &value) const;
    Fixed               operator+(const Fixed &value) const;
    Fixed               operator-(const Fixed &value) const;
    Fixed               operator*(const Fixed &value) const;
    Fixed               operator/(const Fixed &value) const;

    static Fixed        &min(Fixed &a, Fixed &b);
    const static Fixed  &min(const Fixed &a, const Fixed &b);
    static Fixed        &max(Fixed &a, Fixed &b);
    const static Fixed  &max(const Fixed &a, const Fixed &b);

    private:
    
    static const int n_fraction;
    int fixed_point;

};

std::ostream &operator<<(std::ostream& COUT, Fixed const &fixed);