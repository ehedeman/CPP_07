/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:05:15 by ehedeman          #+#    #+#             */
/*   Updated: 2025/01/22 14:37:53 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

void	fillArray(int *a, int size)
{
	for (int i = 0; i < size; i++)
		a[i] = 4;
}

void	printArray(int *a, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << a[i] << std::endl;
}

int main()
{
	int *a = NULL;
	a = new int(5);

	std::cout << a << std::endl;
	fillArray(a, 5);
	printArray(a, 5);
	delete (a);
}