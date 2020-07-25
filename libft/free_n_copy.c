/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_n_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:48:26 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/24 16:02:39 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The free_n_copy(), copies str to new string using ft_strsub() and
** calls ft_strdel() to free(3) given str. It is the caller's responsibility
** to make sure that given str was malloc'ed before it is passed to
** free_n_copy() and can be free'd. Otherwise use directly ft_strsub().
** Returns new string. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*free_n_copy(char *str, int start, int len)
{
	char	*new;

	new = ft_strsub(str, start, len);
	ft_strdel(&str);
	return (new);
}
