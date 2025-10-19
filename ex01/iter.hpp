/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 01:12:05 by codespace         #+#    #+#             */
/*   Updated: 2025/10/19 21:32:01 by codespace        ###   ########.fr       */
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

#endif
