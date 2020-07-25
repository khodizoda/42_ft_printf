/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_width_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:15:04 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/25 00:20:11 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_width_char() formats str only for char specifiers
** i.e. "csp%" given width and flags.
*/

#include "ft_printf.h"

void	format_width_char(t_fmt *fmt)
{
	size_t len;

	len = ft_strlen(fmt->spec_value);
	if (fmt->width > len)
		fmt->spec_value = format_padding(fmt->spec_value, ' ',
						fmt->width, (int)fmt->is_minus);
	return ;
}
