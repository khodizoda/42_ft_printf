/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:12:37 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/23 23:56:25 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The parse_flags() looks for '-' and '0' flags in string, and if one
** is found it sets that flag's var to 1.
** Retuns number of chars parsed.
*/

#include "ft_printf.h"

int		parse_flags(const char *str, t_fmt *fmt)
{
	int i;

	i = 0;
	while (1)
	{
		if (str[i] != '-' && str[i] != '0')
			break ;
		if (str[i] == '-')
			fmt->is_minus = 1;
		if (str[i] == '0')
			fmt->is_zero = 1;
		++i;
	}
	return (i);
}
