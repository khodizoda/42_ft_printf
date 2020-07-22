/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:13:16 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/22 16:17:35 by gkhodizo         ###   ########.fr       */
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
