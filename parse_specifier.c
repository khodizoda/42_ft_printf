/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:13:16 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/30 17:25:21 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The parse_specifier() parses specifier from str, and uses
** parse_spec_values() to parse specifiers values from the va_list.
** Retuns number of chars parsed.
*/

#include "ft_printf.h"

int		parse_specifier(char *str, t_fmt *fmt, va_list *ap)
{
	int		i;
	char	*specs;

	i = 0;
	specs = "cspdiuxX%";
	if (ft_strchr(specs, str[i]))
	{
		fmt->specifier = str[i];
		++i;
		parse_spec_value(fmt, ap);
	}
	return (i);
}
