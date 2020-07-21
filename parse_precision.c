/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:12:41 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/20 22:30:46 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		parse_precision(const char *str, t_fmt *fmt, va_list *ap)
{
	int	i;

	i = 0;
	if (str[i] == '.')
	{
		if (str[++i] == '*' || ft_isdigit(str[i]))
			i += parse_numeric((str + i), &fmt->precision, ap);
		else
			fmt->precision = 0;		// for char '.' means == 0; for num '.' == 1
	}								// for int just change fmt->precision = 1;
	return (i);
}
