/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:13:16 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/20 23:12:37 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		parse_specifier(const char *str, t_fmt *fmt, va_list *ap)
{
	int		i;
	char	*specs;

	i = 0;
	specs = "cspdiuxX%%";
	if (ft_strchr(specs, str[i]))
	{
		fmt->specifier = str[i];
		++i;
		parse_spec_value(fmt, ap);
	}
	return (i);
}

/*
void	parse_spec_value(t_fmt *fmt, va_list *ap) // add convert
{
	if (fmt->specifier == 'c' || fmt->specifier == '%')
		fmt->spec_value = va_arg(*ap, char);
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
}
*/
