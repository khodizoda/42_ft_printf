/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_spec_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:06:58 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/29 20:11:30 by gkhodizo         ###   ########.fr       */
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
	else if (fmt->specifier == 's')
		fmt->spec_value = ft_strdup(va_arg(*ap, char *));
	else if (fmt->specifier == 'p')
		fmt->spec_value = format_hex(ft_itoa_base_unsigned(va_arg(*ap,
						unsigned long long int), 16), fmt->specifier);
	else if (fmt->specifier == 'd' || fmt->specifier == 'i')
		fmt->spec_value = ft_itoa(va_arg(*ap, int));
	else if (fmt->specifier == 'u')
		fmt->spec_value = ft_itoa_unsigned(va_arg(*ap, unsigned int));
	else if (fmt->specifier == 'x' || fmt->specifier == 'X')
		fmt->spec_value = format_hex(ft_itoa_base_unsigned(va_arg(*ap,
						unsigned int), 16), fmt->specifier);
	else if (fmt->specifier == '%')
		fmt->spec_value = char_to_str('%');
	if (ft_strchr(fmt->spec_value, '-'))
		fmt->is_value_negative = 1;
	fmt->value_len = fmt->spec_value == NULL ? 0 : ft_strlen(fmt->spec_value);
	return ;
}
