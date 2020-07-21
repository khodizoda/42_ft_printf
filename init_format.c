/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 23:09:18 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/20 22:19:46 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_format(t_fmt *fmt, t_buff *output)
{
	fmt->is_minus = 0;
	fmt->is_zero = 0;
	fmt->width = -1;
	fmt->precision = -1;
	fmt->spec_value = ft_strnew(1);			// MALLOC_1
	output->buff = ft_strnew(1);			// MALLOC_2
	output->buff_len = 0;
	return ;
}
