/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:41:42 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/23 23:41:04 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’,
** result of the concatenation of s1 and s2, where s2 begins at index s2_start.
** If the allocation fails the function returns NULL.
*/

#include "libft.h"

char	*ft_strsubjoin(char const *s1, char const *s2, unsigned int s2_start)
{
	size_t	s1len;
	size_t	s2len;
	char	*subjoin;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2) - s2_start;
	if (!(subjoin = (char *)malloc((s1len + s2len + 1) * sizeof(char))))
		return (NULL);
	while (*s1)
		*subjoin++ = *s1++;
	s2 += s2_start;
	while (*s2)
		*subjoin++ = *s2++;
	*subjoin = '\0';
	return (subjoin - (s1len + s2len));
}
