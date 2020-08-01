/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_width_num.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:15:11 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/08/01 16:37:36 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_width_num() formats str only for numeric specifiers
** i.e. "diuxX" given width and flags.
*/

#include "ft_printf.h"

void	format_width_num(t_fmt *fmt)
{
	if (fmt->width > fmt->value_len)
	{
		if (fmt->is_zero && (!fmt->is_minus)
			&& ((!fmt->is_precision || fmt->negative_prec)
			|| (fmt->is_precision && fmt->specifier == '%')))
			fmt->spec_value = format_padding(fmt, '0', fmt->width, 0);
		else
			fmt->spec_value = format_padding(fmt, ' ',
								fmt->width, (int)fmt->is_minus);
		fmt->value_len = fmt->width;
	}
	return ;
}
