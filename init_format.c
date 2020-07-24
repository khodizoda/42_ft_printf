/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 23:09:18 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/24 00:15:12 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The init_format() initializes fmt and output structs.
*/

#include "ft_printf.h"

void	init_format(t_fmt *fmt, t_buff *output)
{
	fmt->is_minus = 0;
	fmt->is_zero = 0;
	fmt->width = -1;
	fmt->precision = -1;
	fmt->specifier = '0';  					// 0 for none / empty
	fmt->spec_value = NULL;
	output->buff = ft_strnew(1);			// MALLOC_2 //create linked list instead?
	output->buff_len = 0;
	return ;
}
