/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:13:25 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/24 21:57:39 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The parse_width() parses width from str, using parse_numeric()
** to find numeric value of precision.
** Retuns number of chars parsed.
*/

#include "ft_printf.h"

int		parse_width(char *str, t_fmt *fmt, va_list *ap)
{
	return (parse_numeric(str, &fmt->width, ap));
}
