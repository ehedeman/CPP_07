/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:05:12 by ehedeman          #+#    #+#             */
/*   Updated: 2025/01/22 13:30:53 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename t>
void	iter(t *a, size_t len, void(*f)(t &))
{
	if (!a || len <= 0 || !f)
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	for (size_t i = 0; i < len; i++)
		f(a[i]);
}