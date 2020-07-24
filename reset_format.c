/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 00:03:35 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/24 00:12:20 by gkhodizo         ###   ########.fr       */
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
	fmt->width = -1;
	fmt->precision = -1;
	fmt->specifier = '0';  			// '0' for none / empty
	ft_strdel(&fmt->spec_value);	//FREE_MALLOC_1
	return ;
}
