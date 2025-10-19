/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:29:18 by codespace         #+#    #+#             */
/*   Updated: 2025/10/19 21:55:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printElem(const T &x) {
    std::cout << x << std::endl;
}

template <typename T>
void increment(T &x) {
    ++x;
}

void appendExclamation(std::string &s) {
    s += "!";
}

int main() {
    int iarr[] = {1, 2, 3, 4, 5};
    unsigned int ilen = sizeof(iarr) / sizeof(iarr[0]);

    std::cout << "ints before increment:" << std::endl;
    ::iter(iarr, ilen, printElem<int>);
    ::iter(iarr, ilen, increment<int>);
    std::cout << "ints after increment:" << std::endl;
    ::iter(iarr, ilen, printElem<int>);

    std::cout << "----\n";
    
    std::string sarr[] = {"hello", "world", "42"};
    unsigned int slen = sizeof(sarr) / sizeof(sarr[0]);

    std::cout << "strings before append:" << std::endl;
    ::iter(sarr, slen, printElem<std::string>);
    ::iter(sarr, slen, appendExclamation);
    std::cout << "strings after append:" << std::endl;
    ::iter(sarr, slen, printElem<std::string>);

    std::cout << "----\n";

    const char * carr[] = {"alpha", "beta", "gamma"};
    unsigned int clen = sizeof(carr) / sizeof(carr[0]);

    std::cout << "const char* array:" << std::endl;
    ::iter(carr, clen, printElem<const char *>);

    std::cout << "----\n";

    char carr2[] = {'a', 'b', 'c'};
    unsigned int clen2 = sizeof(carr2) / sizeof(carr2[0]);
    
    std::cout << "chars before increment:" << std::endl;
    ::iter(carr2, clen2, printElem<char>);
    ::iter(carr2, clen2, increment<char>);
    std::cout << "chars after increment:" << std::endl;
    ::iter(carr2, clen2, printElem<char>);
    
    return 0;
}