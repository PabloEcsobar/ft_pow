/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   app.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blackrider <blackrider@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:06:58 by blackrider        #+#    #+#             */
/*   Updated: 2024/02/02 16:00:15 by blackrider       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pow.h"
#include <stdio.h>

double	scatter(int count)
{
	const double	b = 1;
	const double	k = 1.25;
    const double	m = 0.248;
	double			x;
	double			n;

	if (count < 1)
		return (0);
    x = ft_pow((double)count, m);
    x = ft_pow(2, x);
	return (k * x + b);
}

int main(void)
{
	for (int i = 8; i < 18; ++i)
		printf ("result[%d]:\t%f\n", i, scatter(i));
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
