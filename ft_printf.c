/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 14:19:16 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/23 23:44:31 by gkhodizo         ###   ########.fr       */
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
	t_buff	output;
	va_list ap;

	va_start(ap, format);
	init_format(&fmt, &output);
	parse_input(format, &fmt, &output, &ap);
	test_struct(&fmt, &output); 					//remove
	ft_putstr_len(output.buff, output.buff_len);
	ft_strdel(&output.buff); 						//FREE_MALLOC_2
	va_end(ap);
	return (output.buff_len);
}
