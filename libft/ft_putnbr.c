/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 16:26:25 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/23 16:26:27 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the integer n to the standard output.
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	char result;
	long num;

	num = n;
	if (num < 0)
	{
		write(1, "-", 1);
		num = num * (-1);
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	result = num % 10 + '0';
	write(1, &result, 1);
}
