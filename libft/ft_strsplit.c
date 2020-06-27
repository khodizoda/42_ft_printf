/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:38:26 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/25 20:38:27 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings
** (all ending with ’\0’, including the array itself) obtained by spliting
** s using the character c as a delimiter.
** If the allocation fails the function returns NULL.
*/

#include "libft.h"

static size_t	word_count(char const *str, char c)
{
	size_t count;

	count = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else if (*str != c)
		{
			str++;
			count++;
		}
	}
	return (count);
}

static size_t	elem_size(char const *str, char c)
{
	size_t len;

	len = 0;
	while (str[len] != '\0' && str[len] != c)
		len++;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**arr;
	char	*elem;

	i = 0;
	if (!(arr = ft_memalloc(sizeof(char *) * (word_count(s, c) + 1))))
		return (NULL);
	while (*s && s)
	{
		if (*s != c && *s != '\0')
		{
			j = 0;
			elem = ft_memalloc(elem_size((s + j), c));
			while (*s != c && *s != '\0')
				elem[j++] = *s++;
			ft_strcpy(arr[i++] = ft_memalloc(ft_strlen(elem)), elem);
			free(elem);
			if (!*s)
				break ;
		}
		s++;
	}
	return (arr);
}
