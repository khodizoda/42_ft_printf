/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:16:41 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/19 14:16:43 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memmove() function copies len bytes from string src to string dst.
** The two strings may overlap; the copy is always done in a non-destructive
** manner.
** Returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;
	char	*dstend;
	char	*srcend;

	cdst = (char *)dst;
	csrc = (char *)src;
	if (cdst == csrc)
		return (dst);
	else if (cdst < csrc)
	{
		while (len-- > 0)
			*cdst++ = *csrc++;
	}
	else
	{
		dstend = cdst + (len - 1);
		srcend = csrc + (len - 1);
		while (len-- > 0)
			*dstend-- = *srcend--;
	}
	return (dst);
}
