/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:24:26 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/20 15:24:27 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strchr() function locates the first occurrence of (char)c
** string pointed to by s. The terminating null character is considered to be
** part of the string; therefore if c is '\0', the functions locate the
** terminating '\0'.
** Returns a pointer to the located character, or NULL if the character does
** not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char a;
	char *str;

	a = (char)c;
	str = (char *)s;
	while (*str)
	{
		if (*str == a)
			return (str);
		str++;
	}
	if (*str == '\0' && a == '\0')
		return (str);
	return (NULL);
}
