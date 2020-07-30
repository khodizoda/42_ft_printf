/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_padding.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 19:04:26 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/30 00:09:12 by gkhodizo         ###   ########.fr       */
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

static size_t	new_len(t_fmt *fmt, int c, size_t reslen)
{
	size_t	sclen;

	if (fmt->is_precision && c == '0' && fmt->precision)
		sclen = fmt->is_value_negative == 1 ?
				reslen - (fmt->value_len - 2) : reslen - fmt->value_len;
	else
		sclen = fmt->is_value_negative == 1 ?
				reslen - (fmt->value_len - 1) : reslen - fmt->value_len;
	return (sclen);
}

char			*format_padding(t_fmt *fmt, int c, size_t reslen, int flag)
{
	char	*schar;
	char	*new;
	size_t	sclen;

	sclen = new_len(fmt, c, reslen);
	schar = ft_strnew(sclen);
	schar = ft_memset(schar, c, sclen);
	if (!fmt->value_len)
		return (schar);
	if (fmt->is_value_negative)
	{
		if (c == '0')
			schar[0] = '-';
		else if (c == ' ')
			schar[sclen - 1] = '-';
	}
	if (flag == 0)
		new = ft_strsubjoin(schar, fmt->spec_value, fmt->is_value_negative);
	else
		new = ft_strsubjoin(fmt->spec_value, schar, 0);
	ft_strdel(&schar);
	ft_strdel(&fmt->spec_value);
	return (new);
}
