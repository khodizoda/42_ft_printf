/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:28:19 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/20 20:28:20 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strncmp() compares not more than n characters. Because ft_strncmp()
** is designed for comparing strings rather than binary data, characters
** that appear after a '\0' character are not compared.
** Returns an integer greater than, equal to, or less than 0, according
** as the string s1 is greater than, equal to, or less than the string s2.
** The comparison is done using unsigned characters, so that `\200'
** is greater than '\0'.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *cs1;
	unsigned char *cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (--n > 0 && *cs1 == *cs2)
	{
		cs1++;
		cs2++;
		if (!*cs1 && !*cs2)
			return (0);
	}
	return (*cs1 - *cs2);
}
