/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   app.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blackrider <blackrider@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:06:58 by blackrider        #+#    #+#             */
/*   Updated: 2024/02/05 12:27:00 by blackrider       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pow.h"
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

double	scatter(int count)
{
	const int		min = 100;
	const int		max = 9197;
	const double	f = 2;
	const double	b = 1;
	const double	k_l = 0.11;
	const double	k_e = 1.25;
	const double	n = 0.2485;
	double			x;

	if (count < 1)
		return (0);
	if (count < min || count > max)
		return (b + k_l * count);
    x = ft_pow((double)count, n);
    x = ft_pow(f, x);
	return (k_e * x + b);
}

int		round_sct(double x)
{
	return (round_num(x));
}

int main(void)
{
	double	x;

	printf("DOUBLE MAX: %f\n10 root of double max: %f\n", __DBL_MAX__, pow(__DBL_MAX__, 0.001));
	for (int i = 0; i < 9500; ++i)
	{
		x = scatter(i);
		printf ("result[%d]:\t%f\tround result: %d\n", i, x, round_num(x));
	}
	return (0);
}

// int	main(void)
// {
// 	double	num;
// 	double	root;

// 	num = 1.8;
// 	root = 0.0085;
// 	printf("result of degree [%f] for number [%f]: %f\n",
// 		root, num, ft_pow(num, root));
// 	return (0);
// }
