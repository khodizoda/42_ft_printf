/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_precision_num.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:14:55 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/25 00:21:27 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_precision_num() formats str only for numeric specifiers
** i.e. "diuxX" given precision.
*/

#include "ft_printf.h"

void	format_precision_num(t_fmt *fmt)
{
	size_t len;

	len = ft_strlen(fmt->spec_value);
	if (fmt->precision == 0 && (ft_strcmp(fmt->spec_value, "0") == 0))
		fmt->spec_value =
		free_n_copy(fmt->spec_value, 0, (int)fmt->precision);
	if (fmt->precision > len)
		fmt->spec_value =
		format_padding(fmt->spec_value, '0', fmt->precision, 0);
	return ;
}
