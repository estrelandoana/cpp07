/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:02:02 by codespace         #+#    #+#             */
/*   Updated: 2025/10/19 23:28:41 by codespace        ###   ########.fr       */
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
