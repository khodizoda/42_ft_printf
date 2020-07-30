/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_n_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:48:26 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/30 00:19:07 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” substring from the string
** given as argument. The substring begins at index start and is of size len.
** After copy is done, function calls ft_strdel() to free(3) given str.
** It is the caller's responsibility to make sure that given str was malloc'ed
** before it is passed to free_n_copy() and can be free'd.
** The free_n_copy() DOES NOT null-terminate new string.
** If start and len aren’t refering to a valid substring, the behavior is
** undefined.
** Returns new string. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*free_n_copy(char *str, int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (!(new = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	ft_strncpy(new, (str + start), len);
	ft_strdel(&str);
	return (new);
}
