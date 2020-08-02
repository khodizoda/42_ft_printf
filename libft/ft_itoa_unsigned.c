/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 15:19:06 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/08/02 12:34:49 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a "fresh" string ending with '\0'
** representing the integer n given as argument. Negative numbers ARE NOT
** supported. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*ft_itoa_unsigned(unsigned long int n)
{
	unsigned long int	num;
	char				*res;
	int					len;

	num = n;
	len = ft_int_len(num);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (num == 0)
		res[0] = '0';
	res[len] = '\0';
	while (num != 0)
	{
		res[--len] = ft_absolute_val(num % 10) + '0';
		num = num / 10;
	}
	return (res);
}
