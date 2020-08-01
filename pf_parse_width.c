/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:13:25 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/27 01:28:37 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The parse_width() parses width from str, using parse_numeric()
** to find numeric value of precision.
** Retuns number of chars parsed.
*/

#include "ft_printf.h"

int			parse_width(char *str, t_fmt *fmt, va_list *ap)
{
	int		i;
	ssize_t tmp;

	i = 0;
	if (str[i] == '*')
	{
		tmp = va_arg(*ap, int);
		if (tmp < 0)
			fmt->is_minus = 1;
		fmt->width = ft_absolute_val(tmp);
		++i;
	}
	else if (ft_isdigit(str[i]))
		i += parse_numeric(str, &fmt->width);
	return (i);
}
