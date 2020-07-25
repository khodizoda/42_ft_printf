/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:10:00 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/25 00:23:23 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_hex() takes a hex_string and a specifier char.
** for 'X' and 'x' specifiers it removes leading zeros from the hex_string.
** for 'p' specifier it removes leading zeros and adds '0x' in the beginning
** of the hex_string.
** for 'x' and 'p' it changed uppercase letters to lowercase letters.
** Returns formated hex_string.
*/

#include "ft_printf.h"

char	*format_hex(char *hex, char c)
{
	size_t	len;
	size_t	rem;
	char	*new;

	len = ft_strlen(hex);
	rem = ft_count_begin_char(hex, '0');
	if (c == 'x' || c == 'X')
		new = ft_strsub(hex, rem, len);
	else if (c == 'p')
		new = ft_strsubjoin("0x", hex, rem);
	ft_strdel(&hex);
	len = ft_strlen(new);
	if (c == 'x' || c == 'p')
		while (len)
		{
			new[len] = ft_tolower(new[len]);
			--len;
		}
	return (new);
}
