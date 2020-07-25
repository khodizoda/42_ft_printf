/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_padding.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 19:04:26 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/25 01:37:18 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_padding(), adds int c to the beginning or the end of str,
** depending on int flag.
** If int flag is set to 0, int c is added to the beginning of str;
** If int flag is set to 1, int c is added to the end of the str;
** Returns new string, or NULL if allocation fails.
*/

#include "ft_printf.h"

char	*format_padding(char *str, int c, size_t reslen, int flag)
{
	char	*schar;
	char	*new;
	size_t	strlen;
	size_t	sclen;

	strlen = ft_strlen(str);
	sclen = reslen - strlen;
	schar = ft_strnew(sclen);
	schar = ft_memset(schar, c, sclen);
	if (flag == 0)
		new = ft_strjoin(schar, str);
	else
		new = ft_strjoin(str, schar);
	ft_strdel(&schar);
	ft_strdel(&str);
	return (new);
}
