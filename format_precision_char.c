/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_precision_char.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:14:46 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/25 00:15:01 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_precision_char() formats str only for char specifiers
** i.e. "csp%" given precision.
*/

#include "ft_printf.h"

void	format_precision_char(t_fmt *fmt)
{
	size_t	len;

	if ((fmt->precision == 0
		&& (fmt->specifier == 'c' || fmt->specifier == 'p'))
		|| (fmt->precision >= 0 && fmt->specifier == '%'))
		return ;
	len = ft_strlen(fmt->spec_value);
	if (fmt->specifier == 's'
		&& fmt->precision < len
		&& fmt->is_precision == 1)
		fmt->spec_value = free_n_copy(fmt->spec_value, 0,
							(int)fmt->precision);
	return ;
}