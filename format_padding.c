/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_padding.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 19:04:26 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/29 02:34:33 by gkhodizo         ###   ########.fr       */
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

char	*format_padding(t_fmt *fmt, int c, size_t reslen, int flag)
{
	char	*schar;
	char	*new;
	size_t	sclen;

	sclen = reslen - fmt->value_len;
	schar = ft_strnew(sclen);
	schar = ft_memset(schar, c, sclen);
	if (flag == 0)
		new = ft_strjoin(schar, fmt->spec_value);
	else
		new = ft_strjoin(fmt->spec_value, schar);
	ft_strdel(&schar);
	ft_strdel(&fmt->spec_value);
	return (new);
}
