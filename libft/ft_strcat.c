/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 10:48:58 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/20 10:49:19 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strcat() append a copy of the null-terminated s2 to the end of the
** null-terminated string s1, then add a terminating `\0'. The string s1
** must have sufficient space to hold the result.
** Returns the pointer s1.
*/

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	size_t	i;
	size_t	s1len;

	i = 0;
	s1len = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[i + s1len] = s2[i];
		i++;
	}
	s1[i + s1len] = '\0';
	return (s1);
}
