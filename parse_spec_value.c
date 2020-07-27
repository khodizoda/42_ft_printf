/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_spec_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:06:58 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/26 15:21:11 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The parse_spec_value() parses values from va_list, using parsed specifiers.
** Values are converted to (char *) as needed.
*/

#include "ft_printf.h"

void	parse_spec_value(t_fmt *fmt, va_list *ap)
{
	if (fmt->specifier == 'c')
		fmt->spec_value = char_to_str((unsigned char)va_arg(*ap, int));
	if (fmt->specifier == 's')
		fmt->spec_value = ft_strdup(va_arg(*ap, char *));
	if (fmt->specifier == 'p')
		fmt->spec_value = format_hex(ft_itoa_base_unsigned(va_arg(*ap,
						unsigned long long int), 16), fmt->specifier);
	if (fmt->specifier == 'd' || fmt->specifier == 'i')
		fmt->spec_value = ft_itoa(va_arg(*ap, int));
	if (fmt->specifier == 'u')
		fmt->spec_value = ft_itoa_unsigned(va_arg(*ap, unsigned int));
	if (fmt->specifier == 'x' || fmt->specifier == 'X')
		fmt->spec_value = format_hex(ft_itoa_base_unsigned(va_arg(*ap,
						unsigned int), 16), fmt->specifier);
	if (fmt->specifier == '%')
		fmt->spec_value = char_to_str('%');
	return ;
}
