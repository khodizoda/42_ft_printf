/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:12:12 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/08/01 14:09:05 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The parse_input() parses each char in str.
*/

#include "ft_printf.h"

static int		inspect_format(t_fmt *fmt, t_len *pf_len)
{
	if (fmt->specifier == '\0')
		return (1);
	if (fmt->specifier == 'c' && fmt->is_null)
		null_char(fmt, pf_len);
	else
		format_input(fmt, pf_len);
	return (0);
}

static int		parse_format(char *str, t_fmt *fmt, va_list *ap)
{
	int i;

	i = 0;
	i += parse_flags((str + i), fmt);
	i += parse_width((str + i), fmt, ap);
	i += parse_precision((str + i), fmt, ap);
	i += parse_specifier((str + i), fmt, ap);
	return (i);
}

void			parse_input(char *str, t_fmt *fmt, t_len *pf_len, va_list *ap)
{
	int	i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			++i;
			reset_format(fmt);
			i += parse_format((str + i), fmt, ap);
			if (inspect_format(fmt, pf_len) == 1)
				return ;
		}
		j = 0;
		while (str[i] != '%' && str[i] != '\0')
		{
			++pf_len->print_len;
			++j;
			++i;
		}
		ft_putstr_len((str + i - j), j);
	}
}
