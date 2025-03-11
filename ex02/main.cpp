/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:05:15 by ehedeman          #+#    #+#             */
/*   Updated: 2025/03/11 10:51:32 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

void	ArrayData(Array<int> &a, int size, int mode)
{
	if (!mode)
	{
		for (int i = 0; i < size; i++)
			a[i] = 4;
	}
	else
	{
		for (int i = 0; i < size; i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;
	}
}

int main()
{
	Array<int> a(5);
	
	ArrayData(a, 5, 0);
	ArrayData(a, 5, 1);
	
	Array<int> copy(a);
	
	a[3] = 3;
	std::cout << "a: " << a.size() << std::endl;
	ArrayData(a, 5, 1);
	std::cout << "copy: " << copy.size() << std::endl;
	ArrayData(copy, 5, 1);
	try
	{
		a[8] = 5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
