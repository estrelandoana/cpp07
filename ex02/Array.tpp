/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:44:51 by codespace         #+#    #+#             */
/*   Updated: 2025/10/19 23:34:59 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(NULL), _size(n) {
    if (n == 0) {
        _array = NULL;
        return;
    }
    _array = new T[n];
    for (unsigned int i = 0; i < n; ++i)
        _array[i] = T();
}

template <typename T>
Array<T>::Array(const Array& copy) : _array(NULL), _size(0) {
    _size = copy._size;
    if (_size == 0) {
        _array = NULL;
        return;
    }
    _array = new T[_size];
    for (unsigned int i = 0; i < _size; ++i)
        _array[i] = copy._array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& copy) {
    if (this == &copy)
        return *this;
    unsigned int new_size = copy._size;
    if (new_size == 0) {
        delete [] _array;
        _array = NULL;
        _size = 0;
        return *this;
    }

    T* tmp = new T[new_size];
    for (unsigned int i = 0; i < new_size; ++i)
        tmp[i] = copy._array[i];

    delete [] _array;
    _array = tmp;
    _size = new_size;
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete [] _array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}
