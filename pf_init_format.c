/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_init_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 23:09:18 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/08/01 18:48:02 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The init_format() initializes fmt and pf_len structs.
*/

#include "ft_printf.h"

void	init_format(t_fmt *fmt, t_len *pf_len)
{
	fmt->is_null = 0;
	fmt->is_minus = 0;
	fmt->is_zero = 0;
	fmt->width = 0;
	fmt->is_precision = 0;
	fmt->precision = 0;
	fmt->negative_prec = 0;
	fmt->specifier = '0';
	fmt->spec_value = NULL;
	fmt->is_value_negative = 0;
	fmt->value_len = 0;
	pf_len->print_len = 0;
	return ;
}
