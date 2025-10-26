/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:02:02 by apaula-l          #+#    #+#             */
/*   Updated: 2025/10/26 16:37:38 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <stdexcept>

template <typename T>
class Array {
    private:
        T* _array;
        unsigned int _size;
        
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& copy);
        Array& operator=(const Array& copy);
        ~Array();
        
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;

        unsigned int size() const;
};

# include "Array.tpp"

#endif
