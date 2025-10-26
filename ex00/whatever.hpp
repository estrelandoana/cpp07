/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 00:57:44 by apaula-l          #+#    #+#             */
/*   Updated: 2025/10/26 16:36:51 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string>

template <typename T>
void swap (T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min (T const &a, T const &b) {
    return (b <= a ? b : a);
}

template <typename T>
T max (T const &a, T const &b) {
    return (b >= a ? b : a);
}

#endif
