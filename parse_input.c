/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:12:12 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/23 23:58:05 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The parse_input() parses each char in str.
*/

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
			reset_format(fmt);
			str += parse_flags(str, fmt);
			str += parse_width(str, fmt, ap);
			str += parse_precision(str, fmt, ap);
			str += parse_specifier(str, fmt, ap);
		}
		else
		{
			ft_strncat(output->buff, str, 1);	  // DON'T HAVE ENOUGH MEMORY IN output->buff // create linked list instead?
			++output->buff_len;
			++str;
		}
		// print format str?
		//write(1, &output->buff, output->buff_len);
	}
	return ;
}
