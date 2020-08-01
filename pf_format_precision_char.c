/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_precision_char.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:14:46 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/08/01 18:44:23 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_precision_char() formats str only for char specifiers
** i.e. "csp%" given precision.
*/

#include "ft_printf.h"

void	format_precision_char(t_fmt *fmt)
{
	if (fmt->specifier == 'p' && fmt->is_precision
		&& fmt->precision == 0 && fmt->negative_prec == 0
		&& fmt->is_null)
	{
		fmt->spec_value = free_n_copy(fmt->spec_value, 0, 2);
		fmt->value_len = 2;
		return ;
	}
	if ((fmt->precision == 0
		&& (fmt->specifier == 'c' || fmt->specifier == 'p'))
		|| (fmt->precision && fmt->specifier == '%')
		|| fmt->negative_prec)
		return ;
	if (fmt->specifier == 's'
		&& fmt->precision < fmt->value_len
		&& fmt->is_precision == 1)
	{
		fmt->spec_value = free_n_copy(fmt->spec_value, 0, fmt->precision);
		fmt->value_len = fmt->precision;
	}
	return ;
}
