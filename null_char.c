/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   null_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:13:05 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/08/01 13:57:16 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The null_char() is a function to handle special case, when char passed
** to ft_printf is == '\0'. It also supports width specified with char.
*/

#include "ft_printf.h"

void	null_char(t_fmt *fmt, t_len *pf_len)
{
	pf_len->print_len += fmt->width;
	if (fmt->width)
	{
		if (fmt->is_minus)
			write(1, "\0", 1);
		while (--fmt->width > 0)
			write(1, " ", 1);
		if (!fmt->is_minus)
			write(1, "\0", 1);
		return ;
	}
	else
		write(1, "\0", 1);
	++pf_len->print_len;
	return ;
}
