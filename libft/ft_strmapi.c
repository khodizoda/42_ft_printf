/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:25:20 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/23 14:25:21 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed as argument
** by giving its index as first argument to create a “fresh” new string
** (with malloc(3)) resulting from the successive applications of f.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*new;
	char			*cs;

	i = 0;
	len = ft_strlen(s);
	new = (char *)malloc((len + 1) * sizeof(char));
	cs = (char *)s;
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f(i, cs[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
