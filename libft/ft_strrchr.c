/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:07:42 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/20 17:07:44 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strrchr() function locates the last occurrence of (char)c
** string pointed to by s.
** Return a pointer to the located character, or NULL if the character
** does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;

	str = (char *)s;
	len = ft_strlen(s) + 1;
	while (len-- > 0)
	{
		if (*(str + len) == (char)c)
			return (str + len);
	}
	return (NULL);
}
