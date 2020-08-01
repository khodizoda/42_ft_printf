/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_parse_numeric.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:27:12 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/08/01 18:48:16 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The parse_numberic() sets a numeric value to fmt variable
** found inside the string.
** Retuns number of chars parsed.
*/

#include "ft_printf.h"

int	parse_numeric(char *str, size_t *fmt)
{
	int		i;
	char	*out;

	i = 0;
	while (ft_isdigit(str[i]))
		++i;
	out = ft_strsub(str, 0, i);
	*fmt = ft_atoi(out);
	ft_strdel(&out);
	return (i);
}
