/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_numeric.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:27:12 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/20 22:20:11 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		parse_numeric(const char *str, ssize_t *fmt, va_list *ap)
{
	int		i;
	int		num_len;
	char	*out;
	
	i = 0;
	if (str[i] == '*')
	{
		*fmt = (ssize_t)va_arg(*ap, int);
		++i;
	}
	else if (ft_isdigit(str[i]))
	{
		num_len = 0;
		while (ft_isdigit(str[i]))
		{
			++num_len;
			++i;
		}
		out = ft_strsub(str, 0, num_len);		//MALLOC_3
		*fmt = ft_atoi(out);
		free(out);								//FREE_MALLOC_3
	}
	return (i);
}
