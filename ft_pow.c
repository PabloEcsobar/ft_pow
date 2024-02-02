/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blackrider <blackrider@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:24:51 by blackrider        #+#    #+#             */
/*   Updated: 2024/02/02 16:07:24 by blackrider       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pow.h"
#include <stdlib.h>
#include <stdio.h>

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
	double	r_deg;

	if (num < 0)
		return (0);
	r_deg = deg - (int)deg;
	root = 1;
	while (ft_abs(r_deg - round_num(r_deg)) > 0.0000001 && r_deg < 10000000)
	{
		r_deg *= 10;
		root *= 10;
	}
	r_deg = round_num(r_deg);
	if (root / r_deg > 100 || root > 999)
	{
		root = round_num(root / r_deg);
		return (newtroot(num, root, approx_pow(num, root)));
	}
	num = pow_int(num, r_deg);
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
	if (num > 0.999999 && num < 1.000001)
		return (1.0);
	if (deg - (int)deg < 0.0000000001)
		return (pow_int(num, (int)deg));
	if (deg < 1)
		return (pow_float(num, deg));
	return (pow_int(num, (int)deg) * pow_float(num, deg - (int)deg));
}
