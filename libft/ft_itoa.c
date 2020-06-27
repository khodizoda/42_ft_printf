/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:37:28 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/25 16:37:33 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument.Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

static int		int_len(int n)
{
	int len;

	len = 0;
	if (n <= 0)
		++len;
	while (n != 0)
	{
		n = n / 10;
		++len;
	}
	return (len);
}

static int		to_positive(int n)
{
	if (n > 0)
		return (n);
	return (n * (-1));
}

char			*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*res;

	num = n;
	len = int_len(num);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (num < 0)
		res[0] = '-';
	else if (num == 0)
		res[0] = '0';
	res[len] = '\0';
	while (num != 0)
	{
		res[--len] = to_positive(num % 10) + '0';
		num = num / 10;
	}
	return (res);
}
