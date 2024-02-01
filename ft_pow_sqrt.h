/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow_sqrt.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blackrider <blackrider@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:00:56 by blackrider        #+#    #+#             */
/*   Updated: 2024/02/01 14:46:14 by blackrider       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define MIN_DEV 1

double	ft_pow(double num, double deg);
double	approx_one(double num, int deg);
double	approx_pow(double num, int deg);
double	pow_int(double num, int deg);
double	pow_float(double num, double deg);
double	newtroot(double num, double deg, double approx);
////////////////////////TOOLS\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\/
int		round_num(double num);
double	ft_abs(double num);
