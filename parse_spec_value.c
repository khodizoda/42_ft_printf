/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_spec_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:06:58 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/23 01:41:34 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_spec_value(t_fmt *fmt, va_list *ap)
{
	// might consider creating fmt->value_char specifically for chars
	//if (fmt->specifier == 'c')
	//	fmt->spec_value = ft_strjoin((unsigned char)va_arg(*ap, int), "\0"); // MALLOC_1
	if (fmt->specifier == 's')					//DONE?
		fmt->spec_value = va_arg(*ap, char *);	//use ft_strdup instead? IS MALLOCING SAFER?
	//if (fmt->specifier == 'p')
	//	fmt->spec_value = va_arg(*ap, void *);
	if (fmt->specifier == 'd' || fmt->specifier == 'i') //DONE
		fmt->spec_value = ft_itoa(va_arg(*ap, int));	//MALLOC_1
	/*
	if (fmt->specifier == 'u')
		fmt->spec_value = ft_itoa_unsigned(va_arg(*ap, unsigned int)); //itoa_unsigned
	if (fmt->specifier == 'x' || fmt->specifier == 'X')
		fmt->spec_value = ft_itoa_base(va_arg(*ap, int)); //itoa_base / signed or unsigned?
	if (fmt->specifier == '%')
		fmt->spec_value = "%";
	return ;
	*/
}
