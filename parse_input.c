/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:12:12 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/19 23:47:47 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_input(const char *str, va_list *ap, t_fmt *fmt, t_buff *output)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			break;
			//parse_flags();
			//parse_width();
			//parse_precision();
		 	//parse_specifier();
		}
		else 
		{
			ft_strncat(output->buff, &str[i], 1);
			++output->buff_len;
		}	
		++i;	
	}
	printf("len is %zu and str is %s\n", output->buff_len, output->buff);
	return ;
}
