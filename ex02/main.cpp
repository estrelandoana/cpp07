/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:10:00 by apaula-l          #+#    #+#             */
/*   Updated: 2025/10/26 16:37:58 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    std::cout << "Empty Array" << std::endl;
    Array<int> empty;
    std::cout << "Size: " << empty.size() << std::endl;

    std::cout << "\nInt Array" << std::endl;
    Array<int> numbers(5);
    for (unsigned int i = 0; i < numbers.size(); i++)
        numbers[i] = i * 10;
    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

    std::cout << "\nInteger Array Copy" << std::endl;
    Array<int> copy = numbers;
    copy[0] = 999;

    std::cout << "Original[0]: " << numbers[0] << " (Expected: 0)" << std::endl;
    std::cout << "Copy[0]: " << copy[0] << " (Expected: 999)" << std::endl;

    std::cout << "\nStrings Array" << std::endl;
    Array<std::string> words(3);
    words[0] = "My";
    words[1] = "C++";
    words[2] = "Project";

    for (unsigned int i = 0; i < words.size(); i++)
        std::cout << words[i] << " ";
    std::cout << std::endl;

    std::cout << "\nOut of Bounds Access" << std::endl;
    try {
        std::cout << numbers[10] << std::endl;
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
