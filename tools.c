/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blackrider <blackrider@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:33:30 by blackrider        #+#    #+#             */
/*   Updated: 2024/02/01 14:36:47 by blackrider       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	round_num(double num)
{
	if (num - (int)num < 0.5)
		return ((int)num);
	return ((int)num + 1);
}

double	ft_abs(double num)
{
	if (num < 0)
		return (-num);
	return (num);
}
