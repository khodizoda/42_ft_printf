/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:37:57 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/20 18:37:58 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strnstr() locates the first occurrence of the null-terminated string
** needle in the string haystack, where not more than len characters are
** searched. Characters that appear after a `\0' character are not searched.
** Return values: if needle is an empty string, haystack is returned;
** if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer
** to the first character of the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		pos;
	char	*h;

	pos = 0;
	h = (char *)haystack;
	if (!*needle)
		return (h);
	while (len > 0 && *h)
	{
		needle = needle - pos;
		pos = 0;
		while (*h == *needle && len-- > 0)
		{
			h++;
			needle++;
			pos++;
			if (!*needle)
				return (h - pos);
		}
		h = h - pos + 1;
		len = len + pos - 1;
	}
	return (NULL);
}
