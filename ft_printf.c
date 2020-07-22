/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 14:19:16 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/22 16:17:44 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_fmt	fmt;
	t_buff	output;
	va_list ap;

	va_start(ap, format);
	init_format(&fmt, &output);
	parse_input(format, &fmt, &output, &ap);
	va_end(ap);
	return (output.buff_len);
}
