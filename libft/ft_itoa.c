/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:37:28 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/08/02 12:14:23 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” string ending with '\0'
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*res;

	num = n;
	len = ft_int_len(num);
	if (!(res = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (num < 0)
		res[0] = '-';
	else if (num == 0)
		res[0] = '0';
	res[len] = '\0';
	while (num != 0)
	{
		res[--len] = ft_absolute_val(num % 10) + '0';
		num = num / 10;
	}
	return (res);
}
