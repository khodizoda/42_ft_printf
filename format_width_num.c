/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_width_num.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:15:11 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/26 15:40:13 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_width_num() formats str only for numeric specifiers
** i.e. "diuxX" given width and flags.
*/

#include "ft_printf.h"

void	format_width_num(t_fmt *fmt)
{
	size_t	len;

	len = ft_strlen(fmt->spec_value);
	if (fmt->width > len)
	{
		if (fmt->is_zero && (!fmt->is_minus) && (!fmt->is_precision))
			fmt->spec_value = format_padding(fmt->spec_value, '0',
								fmt->width, 0);
		else
			fmt->spec_value = format_padding(fmt->spec_value, ' ',
								fmt->width, (int)fmt->is_minus);
	}
	return ;
}
