/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   approximation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blackrider <blackrider@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:39:21 by blackrider        #+#    #+#             */
/*   Updated: 2024/02/02 15:57:18 by blackrider       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pow.h"

double	approx_one(double num, int deg)
{
	double	res;
	double	tmp;

	tmp = 1.0 / deg;
	res = 1.0 + tmp;
	while (pow_int(res, deg) > num)
	{
		tmp *= 0.4;
		res -= tmp;
	}
	while (pow_int(res * res, deg) < num)
		res *= res;
	return (res);
}

double	approx_pow(double num, int deg)
{
	double	res;

	deg = ft_abs(deg);
	num = ft_abs(num);
	res = num / (deg * deg);
	if (res <= 1)
		return (approx_one(num, deg));
	while (pow_int(res, deg) > num)
		res /= deg * deg;
	if (res <= 1)
		return (approx_one(num, deg));
	while (pow_int(res * res, deg) < num)
		res *= res;
	return (res);
}
