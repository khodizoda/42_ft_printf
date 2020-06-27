/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:57:15 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/20 19:57:16 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strcmp() compares the null-terminated strings s1 and s2.
** Returns an integer greater than, equal to, or less than 0, according
** as the string s1 is greater than, equal to, or less than the string s2.
** The comparison is done using unsigned characters, so that `\200'
** is greater than '\0'.
*/

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *cs1;
	unsigned char *cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (*cs1 == *cs2)
	{
		cs1++;
		cs2++;
		if (!*cs1 && !*cs2)
			return (0);
	}
	return (*cs1 - *cs2);
}
