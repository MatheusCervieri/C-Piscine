/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:14:58 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/14 11:37:24 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
    public: 

    Fixed(void);
    //Copy constructor:
    Fixed(const Fixed& other);

    Fixed& operator=(const Fixed& rhs);

    ~Fixed();

    int getRawBits (void) const;
    
    void setRawBits(int const raw);

    private:
    
    static int n_fraction;
    int fixed_point;

};
