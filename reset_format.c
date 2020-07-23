/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 00:03:35 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/23 01:03:14 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	reset_format(t_fmt *fmt) 
{
	fmt->is_minus = 0;
	fmt->is_zero = 0;
	fmt->width = -1;
	fmt->precision = -1;
	fmt->specifier = '0';  			// '0' for none / empty
	ft_strdel(&fmt->spec_value);	//FREE_MALLOC_1
	fmt->spec_value = ft_strnew(1);	//MALLOC_4
	return ;
}
