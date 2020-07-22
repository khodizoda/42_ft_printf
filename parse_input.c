/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:12:12 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/22 16:17:24 by gkhodizo         ###   ########.fr       */
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
			ft_strncat(output->buff, str, 1);  // DON'T HAVE ENOUGH MEMORY IN output->buff // create linked list instead?
			++output->buff_len;
			++str;
		}	
	}
	return ;
}
