/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:23:48 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/10 12:54:04 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_H
# define CONTACTS_CLASS_H

#include <string>
# include <iomanip>

class Contact{
    public:
        Contact(void);
        ~Contact(void);
    
    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nick() const;
    std::string get_phone() const;
    std::string get_secret() const; 
    
    void    set_first_name(std::string name);
    void    set_last_name(std::string last);
    void    set_nick(std::string nick);
    void    set_phone(std::string number);
    void    set_secret(std::string secret);

    void    display_columns(int i) const;
    void    display_field(std::string field) const;
    void    display_all_information() const;

    private:
    
        std::string first_name;
        std::string last_name;
        std::string nick;
        std::string phone;
        std::string secret;  
};

#endif