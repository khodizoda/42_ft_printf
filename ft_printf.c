/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 14:19:16 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/26 15:11:54 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_printf() takes a string and variading arguments, then formats and
** prints string to stdout.
** Returns num of printed chars.
*/

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_fmt	fmt;
	t_len	pf_len;
	va_list ap;
	char	*cformat;

	va_start(ap, format);
	cformat = (char *)format;
	init_format(&fmt, &pf_len);
	parse_input(cformat, &fmt, &pf_len, &ap);
	ft_strdel(&fmt.spec_value);
	va_end(ap);
	return (pf_len.print_len);
}
