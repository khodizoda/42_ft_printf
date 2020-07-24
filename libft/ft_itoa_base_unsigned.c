/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 15:19:11 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/23 23:36:14 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_itoa_base_unsigned() converts unsigned long long int to string
** given int base. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*ft_itoa_base_unsigned(unsigned long long int n, int base)
{
	long	tmp;
	char	*res;
	size_t	len;

	len = ft_int_len(n);
	if (!(res = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	res[len] = '\0';
	while (len--)
	{
		tmp = n % base;
		res[len] = (tmp < 10) ? tmp + '0' : tmp + '7';
		n /= base;
	}
	return (res);
}
