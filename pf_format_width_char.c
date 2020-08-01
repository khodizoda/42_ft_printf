/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_width_char.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:15:04 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/08/01 18:47:52 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_width_char() formats str only for char specifiers
** i.e. "csp%" given width and flags.
*/

#include "ft_printf.h"

void	format_width_char(t_fmt *fmt)
{
	if (fmt->width > fmt->value_len)
	{
		fmt->spec_value = format_padding(fmt, ' ',
							fmt->width, (int)fmt->is_minus);
		fmt->value_len = fmt->width;
	}
	return ;
}
