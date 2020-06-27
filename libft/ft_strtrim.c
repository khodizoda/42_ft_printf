/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 19:16:55 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/23 19:16:56 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a copy of the string given as
** argument without whitespaces at the beginning or at the end of the string.
** Will be considered as whitespaces the following characters ’ ’, ’\n’ and
** ’\t’. If s has no whitespaces at the beginning or at the end, the function
** returns a copy of s. If the allocation fails the function returns NULL.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	size_t	i;
	size_t	begin;
	size_t	end;

	i = 0;
	begin = 0;
	end = ft_strlen(s);
	if (*s == '\0')
		return ("");
	while (s[--end] == ' ' || s[end] == '\t' || s[end] == '\n')
		if (end == 0)
			break ;
	while ((s[begin] == ' ' || s[begin] == '\t' || s[begin] == '\n') &&
		s[begin + 1] <= ' ')
		begin++;
	if (s[begin] == ' ' || s[begin] == '\t' || s[begin] == '\n')
		begin++;
	new = (char *)malloc((end + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (begin <= end)
		new[i++] = s[begin++];
	new[i] = '\0';
	return (new);
}
