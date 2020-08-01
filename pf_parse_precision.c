/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_parse_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:12:41 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/08/01 18:48:19 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The parse_precision() parses precision from str, and uses parse_numeric()
** to find numeric value of precision. If only '.' is set as a precision
** in str precision value will be set to 0.
** Retuns number of chars parsed.
*/

#include "ft_printf.h"

int	parse_precision(char *str, t_fmt *fmt, va_list *ap)
{
	int		i;
	ssize_t tmp;

	i = 0;
	if (str[i] == '.')
	{
		++i;
		fmt->is_precision = 1;
		if (str[i] == '*')
		{
			tmp = va_arg(*ap, int);
			fmt->precision = tmp < 0 ? 0 : tmp;
			fmt->negative_prec = tmp < 0 ? ft_absolute_val(tmp) : 0;
			++i;
		}
		else if (ft_isdigit(str[i]))
			i += parse_numeric((str + i), &fmt->precision);
		else
			fmt->precision = 0;
	}
	return (i);
}
