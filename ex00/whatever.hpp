/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:39:49 by ehedeman          #+#    #+#             */
/*   Updated: 2025/01/22 13:46:08 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename t>
void swap(t &x, t &y)
{
	t help;
	help = x;
	x = y;
	y = help;
}

template <typename t>
t min(t x, t y)
{
	return (x < y ? x : y);
}

template <typename t>
t max(t x, t y)
{
	return (x > y ? x : y);
}