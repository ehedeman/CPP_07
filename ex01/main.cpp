/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:05:15 by ehedeman          #+#    #+#             */
/*   Updated: 2025/03/11 10:24:19 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	randomFunction_int(int &i)
{
	i++;
}

void	randomFunction_str(std::string &str)
{
	std::cout << str << std::endl;
}

int main()
{
	int		array[5] = {3, 4, 5, 1, 7};
	int		len = 5;
	void	(*int_function)(int &) = &randomFunction_int;

	{	//int array
		for (int i = 0; i < len; i++)
			std::cout << array[i] << ", ";
		std::cout << std::endl;
		iter(array, len, int_function);
		for (int i = 0; i < len; i++)
			std::cout << array[i] << ", ";
		std::cout << std::endl;
	}
	{	//incorrect tests to show error handling
		int *a = NULL;
		iter(a, len, int_function);
		void	(*null_function)(int &) = NULL;
		iter(a, len, null_function);
		iter(array, 0, int_function);
	}
	{	//string array
		std::string a[4] = {"hello", "how", "are", "you"};
		int len = 4;
		void	(*str_function)(std::string &) = &randomFunction_str;
		iter(a, len, str_function);
	}
}