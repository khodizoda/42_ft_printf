/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 00:03:35 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/29 20:10:38 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The reset_format() resets fmt struct.
*/

#include "ft_printf.h"

void	reset_format(t_fmt *fmt)
{
	fmt->is_minus = 0;
	fmt->is_zero = 0;
	fmt->width = 0;
	fmt->is_precision = 0;
	fmt->precision = 0;
	fmt->negative_prec = 0;
	fmt->specifier = '0';
	ft_strdel(&fmt->spec_value);
	fmt->is_value_negative = 0;
	fmt->value_len = 0;
	return ;
}
