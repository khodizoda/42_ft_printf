/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 17:01:33 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/23 17:01:34 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the integer n to the file descriptor fd.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long num;
	char output;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = num * (-1);
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	output = num % 10 + '0';
	write(fd, &output, 1);
}
