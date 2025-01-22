/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:39:53 by ehedeman          #+#    #+#             */
/*   Updated: 2025/01/22 13:04:34 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

//subject main:
int main( void ) 
{
	int a = 2;
	int b = 3;
	std::cout << "before: a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "	a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "before: c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "	c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

//my main:
// int main()
// {
// 	{
// 	int x = 4;
// 	int y = 6;

// 	std::cout << "old: " << x << " : " << y << std::endl;
// 	swap(x, y);
// 	std::cout << "new: " << x << " : " << y << std::endl;
// 	std::cout << "min: " <<min(x, y) << std::endl;
// 	std::cout << "max: " <<max(x, y) << std::endl;
// 	}
// 	std::cout << std::endl;
// 	{
// 	int x = 4;
// 	int y = 6;

// 	std::cout << "old: " << x << " : " << y << std::endl;
// 	swap(x, y);
// 	std::cout << "new: " << x << " : " << y << std::endl;
// 	std::cout << "min: " <<min(y, x) << std::endl;
// 	std::cout << "max: " <<max(y, x) << std::endl;
// 	}
// 	std::cout << std::endl;
// 	{
// 	float x = 4;
// 	float y = 6;

// 	std::cout << "old: " << x << " : " << y << std::endl;
// 	swap(x, y);
// 	std::cout << "new: " << x << " : " << y << std::endl;
// 	std::cout << "min: " <<min(x, y) << std::endl;
// 	std::cout << "max: " <<max(x, y) << std::endl;
// 	}
// 	std::cout << std::endl;
// 	{
// 	float x = 4;
// 	float y = 4;

// 	std::cout << "old: " << x << " : " << y << std::endl;
// 	swap(x, y);
// 	std::cout << "new: " << x << " : " << y << std::endl;
// 	std::cout << "min: " <<min(x, y) << std::endl;
// 	std::cout << "max: " <<max(x, y) << std::endl;
// 	}
// 	// wrong on purpose to show the types need to be the same:
// 	// {
// 	// float x = 4;
// 	// int y = 6;

// 	// float maxi;
// 	// float mini;

// 	// swap(x, y);
// 	// std::cout << x << " : " << y << std::endl;
// 	// std::cout << min(x, y) << std::endl;
// 	// std::cout << max(x, y) << std::endl;
// 	// }
// }