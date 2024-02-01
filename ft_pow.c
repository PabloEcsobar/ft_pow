/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blackrider <blackrider@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:24:51 by blackrider        #+#    #+#             */
/*   Updated: 2024/02/01 15:09:30 by blackrider       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pow.h"
#include <stdlib.h>

double	pow_int(double num, int deg)
{
	int		deg_abs;
	double	x;

	deg_abs = ft_abs(deg);
	x = num;
	while (deg_abs > 1)
	{
		num *= x;
		--deg_abs;
	}
	if (x < 0 && deg < 0 && num > 0)
		num *= -1;
	if (deg < 0)
		return (1 / num);
	return (num);
}

double	newtroot(double num, double deg, double approx)
{
	double	tmp;
	double	prec;
	double	err;

	prec = (num * deg) / 80000000000;
	while (ft_abs(num - pow_int(approx, deg)) > prec)
	{
		tmp = pow_int(approx, deg);
		err = num - tmp;
		approx = approx + err / (deg * tmp / approx);
	}
	return (approx);
}

double	pow_float(double num, double deg)
{
	double	root;
	double	root_deg;

	if (num < 0)
		return (0);
	root_deg = deg - (int)deg;
	root = 1;
	while (ft_abs(root_deg - round_num(root_deg)) > 0.000000000000001)
	{
		root_deg *= 10;
		root *= 10;
	}
	root_deg = round_num(root_deg);
	if (root / root_deg > 100 || root > 999)
	{
		root = round_num(root / root_deg);
		return (newtroot(num, root, approx_pow(num, root)));
	}
	num = pow_int(num, root_deg);
	return (newtroot(num, root, approx_pow(num, root)));
}

double	ft_pow(double num, double deg)
{
	if (!deg && !num)
		return (0);
	if (!deg)
		return (num / ft_abs(num));
	if (!num)
		return (num);
	if (deg - (int)deg < 0.0000000001)
		return (pow_int(num, (int)deg));
	if (deg < 1)
		return (pow_float(num, deg));
	return (pow_int(num, (int)deg) * pow_float(num, deg - (int)deg));
}
