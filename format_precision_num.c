/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_precision_num.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:14:55 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/29 03:01:10 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_precision_num() formats str only for numeric specifiers
** i.e. "diuxX" given precision.
*/

#include "ft_printf.h"

void	format_precision_num(t_fmt *fmt)
{
	if (fmt->precision == 0 && (ft_strcmp(fmt->spec_value, "0") == 0))
	{
		ft_strdel(&fmt->spec_value);
		fmt->spec_value = ft_strdup("0"); //error?
		fmt->value_len = 0;
	}
	if (fmt->precision > fmt->value_len)
	{
		fmt->spec_value = format_padding(fmt, '0', fmt->precision, 0);
		fmt->value_len = fmt->precision;
	}
	return ;
}
