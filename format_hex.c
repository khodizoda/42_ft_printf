/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:10:00 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/07/29 19:46:16 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The format_hex() takes a hex_string and a specifier char.
** for 'X' and 'x' specifiers it removes leading zeros from the hex_string.
** for 'p' specifier it removes leading zeros and adds '0x' in the beginning
** of the hex_string.
** for 'x' and 'p' it changes the uppercase letters to the lowercase letters.
** Returns formated hex_string.
*/

#include "ft_printf.h"

char	*format_hex(char *hex, char c)
{
	int		len;
	int		rem;
	char	*new;

	len = ft_strlen(hex);
	rem = ft_count_begin_char(hex, '0');
	if (c == 'x' || c == 'X')
		new = ft_strsub(hex, rem, len);
	else if (c == 'p')
		new = rem == len ? ft_strsubjoin("0x", "0", 0) :
							ft_strsubjoin("0x", hex, rem);
	ft_strdel(&hex);
	len = ft_strlen(new);
	if (c == 'x' || c == 'p')
		while (len >= 0)
		{
			new[len] = ft_tolower(new[len]);
			--len;
		}
	return (new);
}
