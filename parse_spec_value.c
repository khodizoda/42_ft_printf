/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_spec_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:06:58 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/22 16:18:23 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_spec_value(t_fmt *fmt, va_list *ap)
{
	if (fmt->specifier == 'c' || fmt->specifier == '%')
		fmt->tmp = va_arg(*ap, int);
	/*
	if (fmt->specifier == 's') //loop for str
		fmt->spec_value = va_arg(*ap, char *);
	if (fmt->specifier == 'p')
		fmt->spec_value = va_arg(*ap, void *);
	if (fmt->specifier == 'd' || fmt->specifier == 'i')
		fmt->spec_value = va_arg(*ap, int); //itoa
	if (fmt->specifier == 'u')
		fmt->spec_value = convert_unsigned_int(va_arg(*ap, unsigned int)); //itoa_unsigned
	if (fmt->specifier == 'x' || fmt->specifier == 'X')
		fmt->spec_value = va_arg(*ap, unsigned char); //itoa_base
	return ;
	*/
}
