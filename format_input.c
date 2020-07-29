/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:16:53 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/29 02:36:25 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_input() formats str, given flags, width and precision.
** Then it prints formatted str to stdout.
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
	pf_len->print_len += fmt->value_len;
	ft_putstr_len(fmt->spec_value, fmt->value_len);
	return ;
}
