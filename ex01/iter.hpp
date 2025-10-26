/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 01:12:05 by apaula-l          #+#    #+#             */
/*   Updated: 2025/10/26 16:37:00 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template <typename T, typename F>
void iter(T *array, unsigned int const length, F func) {
    for (unsigned int i = 0; i < length; ++i) {
        func(array[i]);
    }
}

template <typename T, typename F>
void iter(const T *array, unsigned int const length, F func) {
    for (unsigned int i = 0; i < length; ++i) {
        func(array[i]);
    }
}

#endif
