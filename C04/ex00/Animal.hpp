/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:36:49 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/18 11:04:43 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
# define Animal_HPP

#include <string>
#include <iostream>

class Animal
{
    public: 
    
    Animal(void);
    Animal(std::string type);

    /*error: deleting object of polymorphic class type ‘Animal’
     which has non-virtual destructor might cause undefined behavior*/
    
    virtual ~Animal(void);
    
    Animal( const Animal& src );
    Animal& operator=( const Animal& rhs );

    virtual void    makeSound( void ) const;
    std::string     getType( void ) const; 

    protected:

    std::string type;
    
   
};

#endif