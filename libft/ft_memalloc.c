/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 16:02:36 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/21 16:02:38 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” memory area.
** The memory allocated is initialized to 0. If the allocation fails,
** the function returns NULL.
** Returns the allocated memory area.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t			i;
	unsigned char	*mem;

	mem = (unsigned char *)malloc((size + 1) * sizeof(unsigned char));
	if (!mem)
		return (NULL);
	else
	{
		i = -1;
		while (++i < size)
			mem[i] = 0;
		mem[i] = '\0';
		return (mem);
	}
	return (NULL);
}
