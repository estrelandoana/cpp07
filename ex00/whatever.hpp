/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 00:57:44 by codespace         #+#    #+#             */
/*   Updated: 2025/10/13 01:10:52 by codespace        ###   ########.fr       */
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
