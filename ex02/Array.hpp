/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:48:29 by ehedeman          #+#    #+#             */
/*   Updated: 2025/01/22 14:30:04 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> class Array
{
private:
	T				*array;
	unsigned int	_size;
public:
						Array();
						Array(unsigned int n);
						Array(const Array &copy);
						~Array();
	
	Array				&operator=(const Array &src);	// remember deep copy
	T					&operator[](unsigned int index);					//subscipt operator overload
	
	T					*getArray()const;
	unsigned int		getSize(void)const;	//returns size parameter
	unsigned int	size(void)const;	//returns amount of elements

	class 				WrongIndexException : public std::exception
	{
		public:
			const char	*what(void)const throw();
	};
};

