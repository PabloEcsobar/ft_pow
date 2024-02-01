/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blackrider <blackrider@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:06:58 by blackrider        #+#    #+#             */
/*   Updated: 2024/02/01 15:07:45 by blackrider       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pow.h"
#include <stdio.h>

int	main(void)
{
	double	num;
	double	root;

	num = 1.8;
	root = 0.0085;
	printf("result of degree [%f] for number [%f]: %f\n",
		root, num, ft_pow(num, root));
	return (0);
}
