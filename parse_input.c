/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:12:12 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/20 22:42:15 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_input(const char *str, t_fmt *fmt, t_buff *output, va_list *ap)
{
	while (1)
	{
		if (*str == '\0')
			break ;
		if (*str == '%')
		{
			++str;
			str += parse_flags(str, fmt);
			str += parse_width(str, fmt, ap);
			str += parse_precision(str, fmt, ap);
		 	parse_specifier(str, fmt, ap);
		}
		else 
		{
			ft_strncat(output->buff, str, 1);  // DON'T HAVE ENOUGH MEMORY IN output->buff
			++output->buff_len;
			++str;
		}	
	}
	printf("flag zero is %zu, minus is %zu\n", fmt->is_zero, fmt->is_minus);
	printf("width is %zu\n", fmt->width);
	printf("precision is %zu\n", fmt->precision);
	printf("specifier is %c\n", fmt->specifier);
	printf("%zu : %s\n", output->buff_len, output->buff);
	return ;
}
