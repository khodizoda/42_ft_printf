/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:39:42 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/19 14:39:47 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memchr() function locates the first occurrence of (unsigned char)c
** in string s.
** Returns a pointer to the byte located, or NULL if no such byte exists
** within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;

	cs = (unsigned char *)s;
	while (n > 0)
	{
		if (*cs == (unsigned char)c)
			return (cs);
		cs++;
		n--;
	}
	return (NULL);
}
