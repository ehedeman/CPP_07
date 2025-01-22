/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:48:26 by ehedeman          #+#    #+#             */
/*   Updated: 2025/01/22 14:36:50 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template <typename T> Array<T>::Array(): _size(0)
{
	std::cout << "Array default Constructor called" << std::endl;
	this->array = new T[this->_size];
}

template <typename T> Array<T>::Array(unsigned int n):_size(n)
{
	std::cout << "Array Constructor called" << std::endl;
	this->array = new T[this->_size];
}

template <typename T> Array<T>::Array(const Array &copy)
{
	std::cout << "Array copy Constructor called" << std::endl;
	*this = copy;
}

template <typename T> Array<T>::~Array()
{
	delete[](this->array);
	std::cout << "Array Destructor called" << std::endl;
}

template <typename T> Array<T> &Array<T>::operator=(const Array &src)
{
	if (this == &src)
		return *this;
	this->_size = src.getSize();
	this->array = new T[this->_size];
	for (size_t i = 0; i < src.getSize(); i++)
		this->array[i] = src.getArray()[i];
}

template <typename T> T	&Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size) {
		throw WrongIndexException();
	}
	return this->array[index];
}

template <typename T>	T *Array<T>::getArray()const{return (this->array);}
template <typename T>	unsigned int Array<T>::getSize(void)const{return(this->_size);}

template <typename T> unsigned int Array<T>::size(void)const
{
	unsigned int i = 0;

	while (this[i])
		i++;
	return (i);
}

template <typename T> const char*	\
	Array<T>::WrongIndexException::what(void)const throw()
{
	return("Index outof bounds");
}