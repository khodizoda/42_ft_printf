/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:16:53 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/25 00:11:23 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_input() formats str, given flags, width and precision.
** Then it prints formated str to strout.
*/

#include "ft_printf.h"

void	format_input(t_fmt *fmt, t_len *pf_len)
{
	if (ft_strchr("csp%", fmt->specifier))
	{
		format_precision_char(fmt);
		if (fmt->specifier == '%')
			format_width_num(fmt);
		else
			format_width_char(fmt);
	}
	else if (ft_strchr("duixX", fmt->specifier))
	{
		format_precision_num(fmt);
		format_width_num(fmt);
	}
	pf_len->print_len += ft_strlen(fmt->spec_value);
	ft_putstr_len(fmt->spec_value, ft_strlen(fmt->spec_value));
	return ;
}
