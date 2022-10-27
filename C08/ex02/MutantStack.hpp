/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:18:12 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/27 16:53:32 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stack>

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void);
        MutantStack(const MutantStack<T>& other);
        ~MutantStack();
        MutantStack<T>& operator=(const MutantStack<T> & other);
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator	begin(void);
        iterator	end(void);
};

#endif